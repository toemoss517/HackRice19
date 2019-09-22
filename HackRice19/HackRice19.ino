#include <Adafruit_Sensor.h>
#include <Adafruit_L3GD20_U.h>

#include <Mouse.h>


#define FLEXSENSORPIN0 A0
#define FLEXSENSORPIN1 A1

Adafruit_L3GD20_Unified gyro = Adafruit_L3GD20_Unified(20);
bool begin(gyroRange_t L3DS20_RANGE_500DPS);


//defined variables for each sensor
float middleReading;
float indexReading;

void setup(void) {
  Serial.begin(9600);
  //Mouse.begin();


}

void loop(void) {
  middleReading = analogRead(FLEXSENSORPIN1);
  indexReading = analogRead(FLEXSENSORPIN0);

  sensors_event_t event; 
  Serial.print(2);
  gyro.getEvent(&event);
  Serial.print(3);
  
  Serial.print("X: "); Serial.print(event.gyro.x); Serial.print("  ");
  Serial.print("Y: "); Serial.print(event.gyro.y); Serial.print("  ");
  Serial.print("Z: "); Serial.print(event.gyro.z); Serial.print("  ");

  //Testing the Sensors
//  Serial.print("Reading Middle ");
//  Serial.println(middleReading);
//
//  Serial.print("Reading Index ");
//  Serial.println(indexReading);

  delay(300);

  //End of Testing

//  if (middleReading < 400) {
//    Mouse.click(MOUSE_LEFT);
//  }
//
//  if (indexReading < 475) {
//    Mouse.click(MOUSE_RIGHT);
//  }

  delay(100);


}
