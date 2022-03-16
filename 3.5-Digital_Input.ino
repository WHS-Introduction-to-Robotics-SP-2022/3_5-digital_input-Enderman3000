int x=7;
int inPin=7;
int val=0;

void setup() {
  Serial.begin(9600);
  pinMode(inPin, INPUT);
  
  
}

void loop() {
  val=digitalRead(7);
  Serial.println(val);
  delay(100);
  
}
