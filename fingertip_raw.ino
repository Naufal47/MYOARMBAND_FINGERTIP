
void setup() {
  // put your setup code here, to run once:
  Serial.begin(2000000);
  //analogReference(EXTERNAL);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int glove1 = analogRead(A0);
  int glove2 = analogRead(A1);
  int glove3 = analogRead(A2);
  int glove4 = analogRead(A3);
  int glove5 = analogRead(A4);
//  int grip = analogRead(A5);
//  Serial.println(glove2);
  Serial.println((String) ""+ glove1+","+ glove2+","+ glove3+","+ glove4+","+ glove5+"");
  delay(4);
//
//   if(glove1 > 0 && glove2 > 0 && glove3 > 0 && glove4 > 0 && glove5 > 0)
//  {
//    digitalWrite(2, HIGH);
//    digitalWrite(3, HIGH);
//    digitalWrite(4, HIGH);
//    digitalWrite(5, HIGH);
//    digitalWrite(6, HIGH);
//    delay(500);
//    digitalWrite(2, LOW);
//    digitalWrite(3, LOW);
//    digitalWrite(4, LOW);
//    digitalWrite(5, LOW);
//    digitalWrite(6, LOW);
//    delay(500);
////    digitalWrite(5, HIGH);
////    digitalWrite(6, HIGH);
////    delay(200);
////  }
//  }
//  else
//  {
//    digitalWrite(2, LOW);
//    digitalWrite(3, LOW);
//    digitalWrite(4, LOW);
//    digitalWrite(5, LOW);
//    digitalWrite(6, LOW);
//  }
    

  if(glove1 > 0)
  {
    digitalWrite(2, HIGH);
  }
  else 
  {
    digitalWrite(2, LOW);
  }

  if(glove2 > 0)
  {
    digitalWrite(3, HIGH);
  }
  else 
  {
    digitalWrite(3, LOW);
  }

    if(glove3 > 0)
  {
    digitalWrite(4, HIGH);
  }
  else 
  {
    digitalWrite(4, LOW);
  }

    if(glove4 > 0)
  {
    digitalWrite(5, HIGH);
  }
  else 
  {
    digitalWrite(5, LOW);
  }

    if(glove5 > 0)
  {
    digitalWrite(6, HIGH);
  }
  else 
  {
    digitalWrite(6, LOW);
  }
  

}
