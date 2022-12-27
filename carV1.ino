// Motor Pins
int ena = 5;
int in1 = 6;
int in2 = 7;
int in3 = 8;
int in4 = 9;
int enb = 10;

void setup() {

  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
 
}

void loop() {

  // Motor A spinning Clockwise at Max Speed
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  analogWrite(ena, 255);
  
  // Motor B spinning Clockwise at Max Speed
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(enb, 255);
  delay(2000);
  
  // Stop Spinning
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  delay(2000);




  // Motor A spinning Anti-clockwise at Max Speed
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  analogWrite(ena, 255);

  // Motor B spinning Anti-clockwise at Max Speed
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  analogWrite(enb, 255);
 
  delay(2000);

  // Stop Spinning
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  delay(2000);




  // Motor A spinning Clockwise at Half Speed
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  analogWrite(ena, 127);
  
  // Motor B spinning Clockwise at Half Speed
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(enb, 127);
  delay(2000);

  // Stop Spinning
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  delay(2000);


  

  // Motor A spinning Anti-clockwise at Half Speed
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  analogWrite(ena, 127);

  // Motor B spinning Anti-clockwise at Half Speed
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  analogWrite(enb, 127);
  delay(2000);

  // Stop Spinning
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  delay(2000); 
}
