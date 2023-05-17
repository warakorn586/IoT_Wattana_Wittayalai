#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

String FirstName = ""; //ใส่ชื่อจริงในภาษาอังกฤษ
String LastName = ""; //ใส่นามสกุลในภาษาอังกฤษ

void setup()
{
  Serial.begin(115200);
  Serial.println();
  lcd.begin();//เริ่มการทำงานของ LCD
  lcd.backlight();// เปิดไฟแบล็กไลค์
}

void loop() {
  lcd.setCursor(0, 0);//เลื่อนเคเซอร์ไปบรรทัดที่ 1 ลำดับที่ 0
  lcd.print(FirstName);
  lcd.setCursor(0, 1);//เลื่อนเคเซอร์ไปบรรทัดที่ 2 ลำดับที่ 0
  lcd.print(LastName);
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 0);//เลื่อนเคเซอร์ไปบรรทัดที่ 1 ลำดับที่ 0
  lcd.print(LastName);
  lcd.setCursor(0, 1);//เลื่อนเคเซอร์ไปบรรทัดที่ 2 ลำดับที่ 0
  lcd.print(FirstName);
  delay(1000);
}
