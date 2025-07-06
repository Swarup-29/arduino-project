const int trig = 9;
const int ech = 10;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(ech, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  long timeRequied = pulseIn(ech, HIGH);    //measure time required
  int distance = (timeRequied / 2) / 29.1;  //calculate the distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(100);
}
