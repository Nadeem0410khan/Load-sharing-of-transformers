//Laod sharing of transformers

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int unbalanced=8;
// the setup routine runs once when you press reset:
void setup()
 {
// initialize serial communication at 9600 bits per second:
 pinMode(unbalanced,OUTPUT);
lcd.begin(16, 2);
lcd.clear();
lcd.print("  WELCOME TO ");
lcd.setCursor(0,1);
lcd.print("BALANCE AND UBAL");
delay(3000);
Serial.begin(9600);
}
// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  // delay in between reads for stability
lcd.setCursor(0,1);
lcd.print(sensorValue);
 delay(1000);  
 
if(sensorValue<500)
{
  digitalWrite(unbalanced,HIGH);
  Serial.print("HEAVY LOAD UNBALANCEING STATE");
  Serial.print("LOAD IS UNBALANCE");
  lcd.clear();
lcd.print("LOAD IS UNBALANCED ");
delay(10000);
lcd.clear();
lcd.print("LOAD IS BALANCED ");
delay(10000);
  }
else{
  digitalWrite(unbalanced,LOW);
  Serial.print("LOAD IS BALANCED");
  lcd.clear();
lcd.print("LOAD IS BALANCED ");
  }
}
