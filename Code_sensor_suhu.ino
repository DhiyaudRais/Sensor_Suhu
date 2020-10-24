#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
int pin = A1;
int nilai_ADC = 0;
void setup() {
  // put your setup code here, to run once:
lcd.begin (20,4);
lcd.setCursor (0,0);
lcd.print("MONITORING SUHU");
lcd.setCursor (0,1);
lcd.print ("TELEKOMUNIKASI PNJ");
delay (2000);
lcd.clear();
lcd.setCursor (0,0);
lcd.print("by");
lcd.setCursor (0,1);
lcd.print ("Dhiyaud Dien Rais");
lcd.setCursor (0,2);
lcd.print ("1903332072");
delay (2000);
lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
nilai_ADC = analogRead(pin);
double Celcius = ((5.0/1024.0)*analogRead(pin)*100);
lcd.setCursor(0,2);
lcd.print("SUHU RUANGAN");
lcd.setCursor (0,3);
lcd.print (Celcius);
lcd.setCursor (6,3);
lcd.print ((char)223);
lcd.setCursor (7,3);
lcd.print ("C");
}
