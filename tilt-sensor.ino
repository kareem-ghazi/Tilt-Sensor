// C++ code

int EN1 = 6;

int IN1 = 2;
int IN2 = 4;

int TILT_SENSOR = 8;

void setup()
{
	pinMode(IN1, OUTPUT);
  	pinMode(IN2, OUTPUT);
  
  	pinMode(TILT_SENSOR, INPUT);
	
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
}

void loop()
{
  int sensorValue = digitalRead(TILT_SENSOR);
  
  digitalWrite(EN1, sensorValue);
}