int motorRight1 = 2;  
int motorRight2 = 3;
int motorLeft1 = 4;  
int motorLeft2 = 5;

void setup() {
  pinMode(motorRight1, OUTPUT);
  pinMode(motorRight2, OUTPUT);
  pinMode(motorLeft1, OUTPUT);
  pinMode(motorLeft2, OUTPUT);
}

void loop() {
  
  digitalWrite(motorRight1, HIGH);
  digitalWrite(motorRight2, LOW);
  digitalWrite(motorLeft1, HIGH);
  digitalWrite(motorLeft2, LOW);
  delay(30000);

  
  digitalWrite(motorRight1, LOW);
  digitalWrite(motorRight2, HIGH);
  digitalWrite(motorLeft1, LOW);
  digitalWrite(motorLeft2, HIGH);
  delay(60000);

  
  for (int i = 0; i < 5; i++) {  
    
    digitalWrite(motorRight1, LOW);
    digitalWrite(motorRight2, HIGH);
    digitalWrite(motorLeft1, HIGH);
    digitalWrite(motorLeft2, LOW);
    delay(6000); 

    
    digitalWrite(motorRight1, HIGH);
    digitalWrite(motorRight2, LOW);
    digitalWrite(motorLeft1, LOW);
    digitalWrite(motorLeft2, HIGH);
    delay(6000);
  }
}
