#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7,8,9,10,11);//8 bit mode
int Echo=12;
int Trigger=13;
int var=0;
int d;
void setup() 
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  Serial.begin(9600);
  pinMode(Echo,INPUT);
  pinMode(Trigger,OUTPUT);
}
void loop() 
{
  digitalWrite(Trigger,LOW);
  delayMicroseconds(10);
  digitalWrite(Trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger,LOW);
  var=pulseIn(Echo,HIGH);
  d=(0.034*var)/2;
  Serial.print("object detected at a distance=");
  Serial.print(d);
  lcd.print("distance=");
  lcd.print(d);
  delay(1000);
  lcd.clear();
}
