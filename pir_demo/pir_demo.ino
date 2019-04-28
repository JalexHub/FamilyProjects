/**
 * PIR Motion Detector Demo
 */
 
#define MOTION_PIN (4)
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(MOTION_PIN, INPUT_PULLDOWN);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool saw_something = digitalRead(MOTION_PIN);
  if(saw_something) {
    Serial.println("I saw something");
  }
  else {
    Serial.println("I saw nothing");
  }
  delay(1000);
}
