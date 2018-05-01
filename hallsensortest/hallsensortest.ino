const int hallSensorPin = 0;
const int coilPin = 10;



void setup() {
  // put your setup code here, to run once:
    pinMode(hallSensorPin, INPUT);
    pinMode(coilPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    //int sensorReadout = analogRead(hallSensorPin);
   // float voltReadout = (sensorReadout*5 - 2.5)/1024;
   //Serial.println(voltReadout);

    analogWrite(coilPin, 50);
   
    delay(100);
}
