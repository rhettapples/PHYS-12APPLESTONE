
const int LIGHT_SENSOR_PIN = A0; // Arduino pin connected to light sensor's  pin
const int LED_PIN1 = 3;
const int LED_PIN2 = 4;
const int LED_PIN3 = 5;// Arduino pin connected to LED's pin
const int ANALOG_THRESHOLD = 500;

// variables will change:
int analogValue;

void setup() {
  pinMode(LED_PIN1, OUTPUT); // set arduino pin to output mode
}

void loop() {
  analogValue = analogRead(LIGHT_SENSOR_PIN); // read the input on analog pin

  if(analogValue > 400)
    digitalWrite(LED_PIN1, HIGH); // turn on LED
  else
    digitalWrite(LED_PIN1, LOW);  // turn off LED
  if(analogValue > 500)
    digitalWrite(LED_PIN2, HIGH); // turn on LED
  else
    digitalWrite(LED_PIN2, LOW);  // turn off LED
  if(analogValue > 700)
    digitalWrite(LED_PIN3, HIGH); // turn on LED
  else
    digitalWrite(LED_PIN3, LOW);  // turn off LED
}
