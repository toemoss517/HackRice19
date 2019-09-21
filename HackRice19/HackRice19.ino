// put your setup code here, to run once:
  //Abdul's Code Mofos
// What pins the sensors are connected to
#include <Mouse.h>
#define FLEXSENSORPIN0 A0 
#define FLEXSENSORPIN1 A1 
#define GYROSENSORPIN A2


//defined variables for each sensor
float middleReading;
float indexReading;
float gyroReading;

float clickerPosition;


void setup(void) {
  Serial.begin(9600);
  //initiate mouse

  //pinMode(2, INPUT);
  Mouse.begin();  
 
}
 
void loop(void) {
  middleReading = analogRead(FLEXSENSORPIN0);
  indexReading = analogRead(FLEXSENSORPIN1);
  gyroReading = analogRead(GYROSENSORPIN);

  clickerPosition = map(gyroReading, 0, 1023, 0, 90);

  Serial.print("Reading Middle "); 
  Serial.println(middleReading);
  
  delay(300);
  
  //Serial.print("Reading Index "); 
  //Serial.println(indexReading);

  delay(300);
  
  //Serial.print("Reading Gyro "); 
  //Serial.println(gyroReading);


  delay(300);
  
  //Serial.print("Clicker Position "); 
  //Serial.println(clickerPosition);

  if (MiddleReading < 775) {
    Mouse.click(MOUSE_LEFT);  
  } 
  if (indexReading < 775) {
    Mouse.click(MOUSE_RIGHT);
  }

  delay(300);
}
