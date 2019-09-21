// What pins the sensors are connected to
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
  Moust.begin()
}
 
void loop(void) {
  middleReading = analogRead(FLEXSENSORPIN0);
  indexReading = analogRead(FLEXSENSORPIN1);
  gyroReading = analogRead(GYROSENSORPIN);

  clickerPosition = map(gyroReading, 0, 1023, 0, 90);

  //Moust reading
  int XReading = clickPosition;
  int YReading = clickposition*(-1);
  
  //Move the Mouse
  Moust.move(XReading, YReading, 0);
  delay(10);
  
  //Testing the Sensors
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
  //End of Testing
}
