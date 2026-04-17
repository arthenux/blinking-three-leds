void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Red LED
  for(int i=1; i<=5; i++)
  {
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
  }

  // Green LED
  for(int i=1; i<=10; i++)
  {
    digitalWrite(8,HIGH);
    delay(500);
    digitalWrite(8,LOW);
    delay(500);
  }

  // Blue LED
  for(int i=1; i<=15; i++)
  {
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);
    delay(500);
  }
}
