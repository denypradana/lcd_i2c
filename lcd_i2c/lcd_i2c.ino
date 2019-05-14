#include <LiquidCrystal_I2C.h>
#include <DS3231.h>

DS3231 rtc(SDA,SCL);
LiquidCrystal_I2C lcd(0x27, 16, 2);

 
void setup() {
  rtc.begin();
  //rtc.setDate(11, 5, 2019);   //mensetting tanggal 11 mei 2019
  //rtc.setTime(17, 37, 20);     //menset jam 17:37:20
  //rtc.setDOW(6);     //menset hari "Sabtu"
  lcd.begin();
}

void loop(){
lcd.setCursor(0,0);
lcd.print(rtc.getDOWStr(1)); //prosedur pemanggilan hari
lcd.setCursor(3,0);
lcd.print(",");
 
lcd.setCursor(4,0);
lcd.print(rtc.getDateStr()); //prosedur pemanggilan tanggal
 
lcd.setCursor(4,1);
lcd.print(rtc.getTimeStr()); //prosedur pemanggilan waktu

//lcd.setCursor(10,1);
//lcd.print("t:");
 
//lcd.setCursor(12,1);
//lcd.print(rtc.getTemp()); //prosedur pemanggilan suhu
}
