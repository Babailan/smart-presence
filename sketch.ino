
int redLed = 9;
int red2Led = 11;
int greenLed = 10;
int motionSensor = 8;

void setup() {
  pinMode(motionSensor, INPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(red2Led, OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  int motionDetected = digitalRead(motionSensor);

  if (motionDetected == HIGH) {
    digitalWrite(greenLed, LOW);  
    warning10Seconds();         
  } else {
    digitalWrite(redLed, LOW);    
    digitalWrite(greenLed, HIGH);
    digitalWrite(red2Led, LOW);   
  }

  delay(50); 
}

void warning10Seconds() {
  unsigned long startTime = millis();  


  while (millis() - startTime < 10000) { 
    Serial.println(millis());
    digitalWrite(redLed, HIGH);       
    digitalWrite(red2Led, LOW);        
    delay(500);                         
    digitalWrite(redLed, LOW);       
    digitalWrite(red2Led, HIGH);     
    delay(500);                      
  }

  digitalWrite(redLed, LOW); 
  digitalWrite(red2Led, LOW);
}
