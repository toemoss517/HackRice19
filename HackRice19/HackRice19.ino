void setup() {
  // put your setup code here, to run once:

<<<<<<< Updated upstream
=======
//defined variables for each sensor
float middleReading;
float indexReading;
float gyroReading;

float clickerPosition;


int FlexRead;

void setup(void) {
  Serial.begin(9600);
  //initiate mouse

  //pinMode(2, INPUT);
  Mouse.begin();
  
>>>>>>> Stashed changes
}

void loop() {
  // put your main code here, to run repeatedly:

<<<<<<< Updated upstream
=======
  delay(300);
  
  //Serial.print("Clicker Position "); 
  //Serial.println(clickerPosition);

  if (FlexRead < 775) {
    Mouse.click();  
  }
>>>>>>> Stashed changes
}
