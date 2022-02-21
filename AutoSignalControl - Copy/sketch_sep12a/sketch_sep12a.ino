int r1=2;
int y1=3;
int g1=4;
int r2=5;
int y2=6;
int g2=7;
int r3=A0;
int y3=A1;
int g3=A2;
int r4=A3;
int y4=A4;
int g4=A5;
void setup() {
  Serial.begin(9600);
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);
  pinMode(y1, OUTPUT);
  pinMode(y2, OUTPUT);
  pinMode(y3, OUTPUT);
  pinMode(g1, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(g3, OUTPUT);
  pinMode(g4, OUTPUT);
  pinMode(y4, OUTPUT);
 
}
void s1()
{
digitalWrite(g1, HIGH);
digitalWrite(y1, LOW);
digitalWrite(r1, LOW);

digitalWrite(r2, HIGH);
digitalWrite(y2, LOW);
digitalWrite(g2, LOW);

digitalWrite(r3, HIGH);
digitalWrite(y3, LOW);
digitalWrite(g3, LOW);

digitalWrite(r4, HIGH);
digitalWrite(y4, LOW);
digitalWrite(g4, LOW);
delay(9000);
digitalWrite(g1, LOW);
digitalWrite(y1, HIGH);
digitalWrite(r1, LOW);

digitalWrite(r2, HIGH);
digitalWrite(y2, LOW);
digitalWrite(g2, LOW);

digitalWrite(r3, HIGH);
digitalWrite(y3, LOW);
digitalWrite(g3, LOW);

digitalWrite(r4, HIGH);
digitalWrite(y4, LOW);
digitalWrite(g4, LOW);

}
void s2()
{
digitalWrite(g1, LOW);
digitalWrite(y1, LOW);
digitalWrite(r1, HIGH);

digitalWrite(r2, LOW);
digitalWrite(y2, LOW);
digitalWrite(g2, HIGH);

digitalWrite(r3, HIGH);
digitalWrite(y3, LOW);
digitalWrite(y3, LOW);

digitalWrite(r4, HIGH);
digitalWrite(y4, LOW);
digitalWrite(g4, LOW);
delay(9000);
digitalWrite(g1, LOW);
digitalWrite(y2, HIGH);
digitalWrite(r1, HIGH);

digitalWrite(r2,LOW);
digitalWrite(y1, LOW);
digitalWrite(g2, LOW);

digitalWrite(r3, HIGH);
digitalWrite(y3, LOW);
digitalWrite(g3, LOW);

digitalWrite(r4, HIGH);
digitalWrite(y4, LOW);
digitalWrite(g4, LOW);

}
void s3()
{
digitalWrite(g1, LOW);
digitalWrite(y1, LOW);
digitalWrite(r1, HIGH);

digitalWrite(r2,HIGH);
digitalWrite(y2, LOW);
digitalWrite(g2, LOW);

digitalWrite(r3,LOW);
digitalWrite(y3, LOW);
digitalWrite(g3,HIGH);

digitalWrite(r4, HIGH);
digitalWrite(y4, LOW);
digitalWrite(g4, LOW);
delay(9000);
digitalWrite(g1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);

digitalWrite(r2, HIGH);
digitalWrite(y1, LOW);
digitalWrite(g2, LOW);

digitalWrite(r3, LOW);
digitalWrite(y3, HIGH);
digitalWrite(g3, LOW);

digitalWrite(r4, HIGH);
digitalWrite(y4, LOW);
digitalWrite(g4, LOW);

}

void s4()
{
digitalWrite(g1, LOW);
digitalWrite(y1, LOW);
digitalWrite(r1, HIGH);

digitalWrite(r2, HIGH);
digitalWrite(y2, LOW);
digitalWrite(g2, LOW);

digitalWrite(r3, HIGH);
digitalWrite(y3, LOW);
digitalWrite(y3, LOW);

digitalWrite(r4, LOW);
digitalWrite(y4, LOW);
digitalWrite(g4, HIGH);
delay(9000);
digitalWrite(g1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);

digitalWrite(r2, HIGH);
digitalWrite(y1, LOW);
digitalWrite(g2, LOW);

digitalWrite(r3, HIGH);
digitalWrite(y3, LOW);
digitalWrite(g3, LOW);

digitalWrite(r4, LOW);
digitalWrite(y4, HIGH);
digitalWrite(g4, LOW);

}
void loop() {
   if( Serial.available()){
   char val= Serial.read();
   //Serial.print(val);
   if(val=='1'){
     s1();
  delay(5000);
   }
  else if(val=='2'){
     s2();
  delay(5000);
   }
   else if(val=='3'){
     s3();
  delay(5000);
   }
    else if(val=='4'){
     s4();
  delay(5000);
   }
  }
}
