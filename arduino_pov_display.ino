//Find Complete Tutorial @https://rootsaid.com


void setup(){
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  pinMode(D8,OUTPUT);
  pinMode(D9,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
}

void loop(){

            R();
            Sp();
            O();
            Sp();
            O();
            Sp();
            T();
            Sp();
            S();
            Sp();
            A();
            Sp();
            I();
            Sp();
            D();
            Sp();
            Sp();
            Sp();

     }

void A(){                                         
  signal(0,1,1,1,1,1,1);                         
  signal(1,0,0,1,0,0,0);                        
  signal(1,0,0,1,0,0,0);                        
  signal(1,0,0,1,0,0,0);                         
  signal(0,1,1,1,1,1,1);                         
}

void B(){
  signal(1,1,1,1,1,1,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,1,0,0,1);
  signal(0,1,1,1,1,1,0);  
}

void C(){
  signal(0,1,1,1,1,1,0);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,0,0,1);
  signal(0,1,0,0,0,1,0);
}

void D(){
  signal(1,1,1,1,1,1,1);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,0,0,1);
  signal(0,1,1,1,1,1,0);
}

void E(){
  signal(1,1,1,1,1,1,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,0,0,0,1);
}

void Ff(){
  signal(1,1,1,1,1,1,1);
  signal(1,0,0,1,0,0,0);
  signal(1,0,0,1,0,0,0);
  signal(1,0,0,1,0,0,0);
  signal(1,0,0,0,0,0,0);
}

void G(){
  signal(0,1,1,1,1,1,0);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,1,0,1);
  signal(1,0,0,0,1,0,1);
  signal(0,1,0,0,1,1,1);
}

void H(){
  signal(1,1,1,1,1,1,1);
  signal(0,0,0,1,0,0,0);
  signal(0,0,0,1,0,0,0);
  signal(0,0,0,1,0,0,0);
  signal(1,1,1,1,1,1,1);
}

void I(){
  signal(1,0,0,0,0,0,1);
  signal(1,1,1,1,1,1,1);  
  signal(1,0,0,0,0,0,1);
}

void J(){
  signal(0,0,0,0,0,1,0);
  signal(0,0,0,0,0,0,1);
  signal(0,0,0,0,0,0,1);
  signal(0,0,0,0,0,0,1);
  signal(1,1,1,1,1,1,0);    
}

void K(){
  signal(1,1,1,1,1,1,1);
  signal(0,0,0,1,0,0,0);
  signal(0,0,1,0,1,0,0);
  signal(0,1,0,0,0,1,0);
  signal(0,0,0,0,0,0,1);
}

void L(){
  signal(1,1,1,1,1,1,1);
  signal(0,0,0,0,0,0,1);
  signal(0,0,0,0,0,0,1);
  signal(0,0,0,0,0,0,1);
  signal(0,0,0,0,0,0,1);
}

void M(){
  signal(1,1,1,1,1,1,1);
  signal(0,1,0,0,0,0,0);
  signal(0,0,1,0,0,0,0);
  signal(0,0,0,1,0,0,0);
  signal(0,0,1,0,0,0,0);
  signal(0,1,0,0,0,0,0);
  signal(1,1,1,1,1,1,1);
}

void N(){
  signal(1,1,1,1,1,1,1);
  signal(0,0,1,0,0,0,0);
  signal(0,0,0,1,0,0,0);
  signal(0,0,0,0,1,0,0);
  signal(1,1,1,1,1,1,1);
}

void O(){
  signal(0,1,1,1,1,1,0);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,0,0,1);
  signal(0,1,1,1,1,1,0);
}

void P(){
  signal(1,1,1,1,1,1,1);
  signal(1,0,0,1,0,0,0);
  signal(1,0,0,1,0,0,0);
  signal(0,1,1,0,0,0,0);
}

void Q(){
  signal(0,1,1,1,1,1,0);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,1,0,1);
  signal(1,0,0,0,0,1,0);
  signal(0,1,1,1,1,0,1);
}

void R(){
  signal(1,1,1,1,1,1,1);
  signal(1,0,0,1,0,0,0);
  signal(1,0,0,1,1,0,0);
  signal(1,0,0,1,0,1,0);
  signal(0,1,1,0,0,0,1);
}

void S(){
  signal(0,1,1,0,0,0,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,0,1,1,0);
}

void T(){
  signal(1,0,0,0,0,0,0);
  signal(1,0,0,0,0,0,0);
  signal(1,1,1,1,1,1,1);
  signal(1,0,0,0,0,0,0);
  signal(1,0,0,0,0,0,0);
}

void U(){
  signal(1,1,1,1,1,1,0);
  signal(0,0,0,0,0,0,1);
  signal(0,0,0,0,0,0,1);
  signal(0,0,0,0,0,0,1);
  signal(1,1,1,1,1,1,0);
}

void V(){
  signal(1,1,1,0,0,0,0);
  signal(0,0,0,1,1,0,0);
  signal(0,0,0,0,0,1,1);
  signal(0,0,1,1,0,0,0);
  signal(1,1,1,0,0,0,0);
}  

void W(){
  signal(1,1,1,1,1,1,1);
  signal(0,0,0,0,0,1,0);
  signal(0,0,0,1,1,0,0);
  signal(0,0,0,0,0,1,0);
  signal(1,1,1,1,1,1,1);
}

void X(){
  signal(1,1,0,0,0,1,1);
  signal(0,0,1,0,1,0,0);
  signal(0,0,0,1,0,0,0);
  signal(0,0,1,0,1,0,0);
  signal(1,1,0,0,0,1,1);
}

void Y(){
  signal(1,1,0,0,0,0,0);
  signal(0,0,1,0,0,0,0);
  signal(0,0,0,1,1,1,1);
  signal(0,0,1,0,0,0,0);
  signal(1,1,0,0,0,0,0);
}

void Z(){
  signal(1,0,0,0,0,1,1);
  signal(1,0,0,0,1,0,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,1,0,0,0,1);
  signal(1,1,0,0,0,0,1);
}

void Sp(){
  signal(0,0,0,0,0,0,0);
  signal(0,0,0,0,0,0,0);
  signal(0,0,0,0,0,0,0);
  signal(0,0,0,0,0,0,0);
  signal(0,0,0,0,0,0,0);
}

void signal(int P1,int P2,int P3,int P4,int P5,int P6,int P7){
  
  if (P1==1) {digitalWrite(D6,HIGH);}   else {digitalWrite(D6,LOW);}
  if (P2==1) {digitalWrite(D5,HIGH);}   else {digitalWrite(D5,LOW);}
  if (P3==1) {digitalWrite(D9,HIGH);}   else {digitalWrite(D9,LOW);}
  if (P4==1) {digitalWrite(D8,HIGH);}   else {digitalWrite(D8,LOW);}
  if (P5==1) {digitalWrite(D4,HIGH);}   else {digitalWrite(D4,LOW);}
  if (P6==1) {digitalWrite(D3,HIGH);}   else {digitalWrite(D3,LOW);}
  if (P7==1) {digitalWrite(D2,HIGH);}   else {digitalWrite(D2,LOW);}
  
  delay(1);
  
}
