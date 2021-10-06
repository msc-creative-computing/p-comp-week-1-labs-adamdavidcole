// C++ code
//
const float baselineTemp = 25.0;
const int lightUpDelayTime = 1000;

const int sensorPin1 = A0;
const int actuatorPin1 = 2;

const int sensorPin2 = A1;
const int actuatorPin2 = 3;

const int sensorPin3 = A2;
const int actuatorPin3 = 4;

const int sensorPin4 = A3;
const int actuatorPin4 = 5;

const int topLeftActuatorPin = 11;
const int bottomLeftActuatorPin = 10;
const int topRightActuatorPin = 7;
const int bottomRightActuatorPin = 6;
const int centralActuatorPin = 9;

void setup() {
  Serial.begin(9600);

  pinMode(actuatorPin1, OUTPUT);
  pinMode(actuatorPin2, OUTPUT);
  pinMode(actuatorPin3, OUTPUT);
  pinMode(actuatorPin4, OUTPUT);
  
  pinMode(centralActuatorPin, OUTPUT);
  pinMode(bottomLeftActuatorPin, OUTPUT);
  pinMode(topLeftActuatorPin, OUTPUT);
  pinMode(topRightActuatorPin, OUTPUT);
  pinMode(bottomRightActuatorPin, OUTPUT);
}

void loop() {
  bool areAllSenorsInitiallyActive = areAllSensorsActive();
  handleLightingSensorIndicators();
  if (!areAllSenorsInitiallyActive) {
    delay(5);
    return;
  }
  
  delay(lightUpDelayTime);
  
  if (areAllSensorsActive())  {
    digitalWrite(topRightActuatorPin, HIGH);
  } else {
    resetCentralLights();
  	return;
  }
  
  delay(lightUpDelayTime);
  
  if (areAllSensorsActive())  {
    digitalWrite(bottomRightActuatorPin, HIGH);
  } else {
    resetCentralLights();
  	return;
  }
  
  delay(lightUpDelayTime);
  
  if (areAllSensorsActive())  {
    digitalWrite(bottomLeftActuatorPin, HIGH);
  } else {
    resetCentralLights();
  	return;
  }
  
  delay(1000);
  
  if (areAllSensorsActive())  {
    digitalWrite(topLeftActuatorPin, HIGH);
  } else {
    resetCentralLights();
  	return;
  }
  
  delay(lightUpDelayTime);
  
  if (areAllSensorsActive())  {
    digitalWrite(centralActuatorPin, HIGH);
  } else {
    resetCentralLights();
  	return;
  }
}

void handleLightingSensorIndicators() {
  bool isSensor1Active = isSensorActive(sensorPin1);
  bool isSensor2Active = isSensorActive(sensorPin2);
  bool isSensor3Active = isSensorActive(sensorPin3);
  bool isSensor4Active = isSensorActive(sensorPin4);
    
  digitalWrite(actuatorPin1, isSensor1Active);	
  digitalWrite(actuatorPin2, isSensor2Active);
  digitalWrite(actuatorPin3, isSensor3Active);
  digitalWrite(actuatorPin4, isSensor4Active);
}

void resetCentralLights() {
  digitalWrite(topLeftActuatorPin, LOW);
  digitalWrite(bottomLeftActuatorPin, LOW);
  digitalWrite(topRightActuatorPin, LOW);
  digitalWrite(bottomRightActuatorPin, LOW);
  digitalWrite(centralActuatorPin, LOW);
}

bool areAllSensorsActive() {
  bool isSensor1Active = isSensorActive(sensorPin1);
  bool isSensor2Active = isSensorActive(sensorPin2);
  bool isSensor3Active = isSensorActive(sensorPin3);
  bool isSensor4Active = isSensorActive(sensorPin4);
  
  bool areAllSensorsActive = isSensor1Active && isSensor2Active && isSensor3Active && isSensor4Active;
  
  return areAllSensorsActive;
}

float getSenorTemperature(int pinId) {
  int sensorValue = analogRead(pinId);
  float voltage = (sensorValue / 1024.0) * 5.0;
  float temperature = (voltage - 0.5) * 100;  
}

bool isSensorActive(int pinId) {
	return getSenorTemperature(pinId) > baselineTemp + 2.0;
}