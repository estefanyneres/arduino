#include<LiquidCrystal.h>
int pino6 = 6;
int pino7 = 7;
int pino8 = 8;
int pino9 = 9;
int pino10 = 10;
int pino13 = 13;

LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

void setup()
{
 pinMode(pino6, OUTPUT);
 pinMode(pino7, OUTPUT);
 pinMode(pino8, OUTPUT);
 pinMode(pino9, OUTPUT);
 pinMode(pino10, OUTPUT);
 pinMode(pino13, OUTPUT);
 lcd.begin(16,2);
 lcd.setCursor(0,0);
 lcd.print("VD:0  AM:0  VM:0  ");
 lcd.setCursor(0,1);
 lcd.print("VD:0  AM:0  VM:0  ");
}

void loop() {
 
 digitalWrite(pino9,HIGH); //liga verde 1
 lcd.setCursor(3,0);
 lcd.print("1");
 
 digitalWrite(pino8,HIGH); //liga vermelho 2
 lcd.setCursor(15,1);
 lcd.print("1"); 
 delay(4000);
  
 digitalWrite(pino9,LOW); //desliga verde 1
 lcd.setCursor(3,0);
 lcd.print("0");
 
 digitalWrite(pino10,HIGH); //liga amarelo 1
 lcd.setCursor(9,0);
 lcd.print("1");
 delay(2000);
  
 digitalWrite(pino10,LOW); //desliga amarelo 1
 lcd.setCursor(9,0);
 lcd.print("0");
 
 digitalWrite(pino13,HIGH); //liga vermelho 1
 lcd.setCursor(15,0);
 lcd.print("1");
  
 digitalWrite(pino8,LOW); //desliga vermelho 2
 lcd.setCursor(15,1);
 lcd.print("0");
 
 digitalWrite(pino6,HIGH); //liga verde 2
 lcd.setCursor(3,1);
 lcd.print("1");
 delay(3000);
  
 digitalWrite(pino6,LOW); //desliga verde 2
 lcd.setCursor(3,1);
 lcd.print("0");
 
 digitalWrite(pino7,HIGH); //liga amarelo 2
 lcd.setCursor(9,1);
 lcd.print("1");
 delay(2000);
  
 digitalWrite(pino7,LOW); //desliga amarelo 2
 lcd.setCursor(9,1);
 lcd.print("0");
  
 digitalWrite(pino13,LOW); //desliga vermelho 1
 lcd.setCursor(15,0);
 lcd.print("0");
  
 
}