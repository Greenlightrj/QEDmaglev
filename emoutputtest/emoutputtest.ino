const int hallSensorPin = 0;
const int coilPin = 10;
int output = 100;
signed int dO = 5;
void setup() {
  // put your setup code here, to run once:
    pinMode(hallSensorPin, INPUT);
    pinMode(coilPin, OUTPUT);
    Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
    int sensorReadout = analogRead(hallSensorPin);
    float voltReadout = (sensorReadout*5 - 2.5)/1024;
    Serial.println(sensorReadout);
    if (output>=255){
      dO = dO*-1;
    }
    else if (output <= 0){
      dO = dO*-1;
    }
    output = output + dO;
    //Serial.println(127);
    analogWrite(coilPin, 255);
    delay(100);
}
