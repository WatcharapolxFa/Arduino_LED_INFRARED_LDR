int led = 9;
int led1 = 10;
void setup() {
  // put your setup code here, to run once:
   pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(led,HIGH);
 digitalWrite(led1,HIGH);
  
}
