#include <LiquidCrystal.h>
#define PI 3.1415926535897932384626433832795

// C++ code
//
LiquidCrystal lcd(12,11,4,5,6,7);
void setup()
{
  pinMode(8, INPUT);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Angle = ");
  lcd.setCursor(0,1);
  lcd.print("By B59 Group 5");
}

void loop()
{
  clearFirstRow();
  char* degOrRad = " D";
  int flexSensorValue = analogRead(A0);
  float angle = getAngleFromSensorValue(flexSensorValue);
  int deg = digitalRead(8);
  if (!deg)
  {
    angle = convertAngleToRad(angle);
    degOrRad = " R";
  }
  if(angle == -1)
    lcd.print("readError");
  else
  {
  	lcd.print(angle);
  	lcd.print(degOrRad);
  }
  delay(500);
}

void clearFirstRow() {
  lcd.setCursor(8, 0);
  lcd.print("        ");
  lcd.setCursor(8,0);
}

float getAngleFromSensorValue(int sensorValue) {
  const int sensorValues[] = {59, 68, 77, 88, 100, 113, 128, 145, 163, 183, 206, 230, 256};
  const int angles[] = {180, 165, 150, 135, 120, 105, 90, 75, 60, 45, 30, 15, 0};

  for (int i = 0; i < sizeof(sensorValues) / sizeof(sensorValues[0]); i++) {
    if (sensorValue >= sensorValues[i] && sensorValue <= sensorValues[i+1]) {
      float ratio = (float)(sensorValue - sensorValues[i]) / (sensorValues[i+1] - sensorValues[i]);
      return angles[i] + ratio * (angles[i+1] - angles[i]);
    }
  }
  
  return -1;
}

float convertAngleToRad(float angle)
{
  if (angle == -1)
    return -1;
  angle = angle * (PI/180);
  return angle;
}
