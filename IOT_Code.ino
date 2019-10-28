#include <SPI.h>
#include <WiFiNINA.h>
#include <WiFiUdp.h>

#include "arduino_secrets.h" 

#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#define SEALEVELPRESSURE_HPA (1013.25)

Adafruit_BME280 bme;

int localPort = 9012;
int lightPin = A2; 
int LPGPin = A1;
int ledPin = 13;     
int lightValue = 0;
int LPGValue = 0;
int temp = 0;
int pressure = 0;
int humidity = 0;

char ssid[] = SECRET_SSID;    
char pass[] = SECRET_PASS;  
int status = WL_IDLE_STATUS;  
WiFiUDP Udp;
  
void setup() {
Udp.begin(localPort);

Serial.begin(9600);
bme.begin(0x76);

  if (WiFi.status() == WL_NO_MODULE) {
    Serial.println("Communication with WiFi module failed!");
    while (true);
  }

  String fv = WiFi.firmwareVersion();
  if (fv < "1.0.0") {
    Serial.println("Please upgrade the firmware");
  }

  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to WPA SSID: ");
    Serial.println(ssid);
     status = WiFi.begin(ssid, pass);
    delay(10000);
  }

  // you're connected now, so print out the data:
  Serial.print("You're connected to the network");
  printCurrentNet();
  printWifiData();
  printCurrentNet();


}

void loop() {
delay(1000);
sensors();
send_data(); 
}

void printWifiData() {
  // print your board's IP address:
  IPAddress ip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip);
  Serial.println(ip);

  // print your MAC address:
  byte mac[6];
  WiFi.macAddress(mac);
  Serial.print("MAC address: ");
  printMacAddress(mac);
}

void printCurrentNet() {
  // print the SSID of the network you're attached to:
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());

  // print the MAC address of the router you're attached to:
  byte bssid[6];
  WiFi.BSSID(bssid);
  Serial.print("BSSID: ");
  printMacAddress(bssid);

  // print the received signal strength:
  long rssi = WiFi.RSSI();
  Serial.print("signal strength (RSSI):");
  Serial.println(rssi);

  // print the encryption type:
  byte encryption = WiFi.encryptionType();
  Serial.print("Encryption Type:");
  Serial.println(encryption, HEX);
  Serial.println();
}

void printMacAddress(byte mac[]) {
  for (int i = 5; i >= 0; i--) {
    if (mac[i] < 16) {
      Serial.print("0");
    }
    Serial.print(mac[i], HEX);
    if (i > 0) {
      Serial.print(":");
    }
  }
  Serial.println();
}


void sensors() {
lightValue = analogRead(lightPin);
LPGValue = analogRead(LPGPin);
pressure = bme.readPressure() / 100.0F;
temp = bme.readTemperature();
humidity = bme.readHumidity();


Serial.print("Light = ");
Serial.println(lightValue);
Serial.print("LPG = ");
Serial.println(LPGValue);
Serial.print("Temperature = ");
Serial.println(temp);
Serial.print("Humidity = ");
Serial.println(humidity);
Serial.print("Pressure = ");
Serial.println(pressure);
Serial.println("");

delay(1000);
}



void send_data()
{
    
    String userAgent_token_device = "ArduinoHomeMonitor/1.0|POST|A1E-0Wrp4u8xf4NuxOv19BqlyRX8kSt7vS|home-safety-monitor:5daaae89c03f971c857b7f5c=>";
    String endline = "|end";
    
    String dev_1 = "ambient-light:";
    String light_val = dev_1 + lightValue;
    String light_read = userAgent_token_device + light_val;
    String light_val_send = light_read + endline;
    
    String dev_2 = "lpg:";
    String lpg_val = dev_2 + LPGValue;
    String lpg_read = userAgent_token_device + lpg_val;
    String lpg_val_send = lpg_read + endline;

    String dev_3 = "pressure:";
    String pressure_val = dev_3 + pressure;
    String pressure_read = userAgent_token_device + pressure_val;
    String pressure_val_send = pressure_read + endline;  

    String dev_4 = "humidity:";
    String humidity_val = dev_4 + humidity;
    String humidity_read = userAgent_token_device + humidity_val;
    String humidity_val_send = humidity_read + endline;  

    String dev_5 = "temperature:";
    String temperature_val = dev_5 + temp;
    String temperature_read = userAgent_token_device + temperature_val;
    String temperature_val_send = temperature_read + endline;  

  
    Udp.beginPacket("things.ubidots.com", 9012);
    Udp.print(light_val_send);
    Udp.endPacket();
    
    Udp.beginPacket("things.ubidots.com", 9012);
    Udp.print(lpg_val_send);
    Udp.endPacket();

    Udp.beginPacket("things.ubidots.com", 9012);
    Udp.print(pressure_val_send);
    Udp.endPacket();

    Udp.beginPacket("things.ubidots.com", 9012);
    Udp.print(humidity_val_send);
    Udp.endPacket();

    Udp.beginPacket("things.ubidots.com", 9012);
    Udp.print(temperature_val_send);
    Udp.endPacket();
    
Serial.println("Send");
//delay(1000);
}
