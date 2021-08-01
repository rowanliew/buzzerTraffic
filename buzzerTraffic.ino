int r1 = 13;
int g1 = 12;
int b1 = 11;

int r2 = 10;
int g2 = 9;
int b2 = 8;

int r3 = 6;
int g3 = 5;
int b3 = 4;

int buzzer = 2;

void setup() {
  pinMode(r1,OUTPUT);
  pinMode(g1,OUTPUT);
  pinMode(b1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(g2,OUTPUT);
  pinMode(b2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(g3,OUTPUT);
  pinMode(b3,OUTPUT);
  pinMode(buzzer, OUTPUT);

//off all lights at the start
  digitalWrite(r1,HIGH);
  digitalWrite(g1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(g2,HIGH);
  digitalWrite(b2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(g3,HIGH);
  digitalWrite(b3,HIGH);
}


void loop() {
  red();
  delay(1000);
  yellow();
  delay(1000);
  green();
  delay(1000);
}


void red(){
  digitalWrite(r1,LOW); 
  digitalWrite(g1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(g3,HIGH); //off rgb3
  digitalWrite(buzzer,HIGH);
}

void yellow(){
  digitalWrite(r1,HIGH); //off rgb1
  digitalWrite(r2,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(b2,HIGH);
  digitalWrite(buzzer,LOW);
}

void green(){
  digitalWrite(r2,HIGH); //off rgb2 
  digitalWrite(g2,HIGH); //off rgb2
  digitalWrite(r3,HIGH);
  digitalWrite(g3,LOW);
  digitalWrite(b3,HIGH);
  digitalWrite(buzzer,LOW);
}
