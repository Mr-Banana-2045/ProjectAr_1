#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(A3, OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.print("Hello Welcome ;D");
  delay(1000);
  lcd.clear();
  for(int x = 1; x < 11; x++){
    lcd.print("Download : ");
    lcd.print(x);
    delay(1000);
    lcd.clear();
  }
  lcd.print("OPEN #_#");

}

void loop() {
  digitalWrite(A3, HIGH);
  lcd.setCursor(0,1);
  lcd.print("ON ");
  delay(1000);
  digitalWrite(A3, LOW);
  lcd.setCursor(0,1);
  lcd.print("OFF");
  delay(1000);
}
