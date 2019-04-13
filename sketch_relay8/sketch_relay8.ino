void setup() {
  // put your setup code here, to run once:
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
  Serial.begin(115200);
  stopAll();
  startAll();
  stopAll();
  startAll();
}

void loop() {
  // put your main code here, to run repeatedly:
}

void startAll(){
    delay(500);
	digitalWrite(D1, 1);
	delay(500);
	digitalWrite(D2, 1);
	delay(500);
	digitalWrite(D3, 1);
	delay(500);
	digitalWrite(D4, 1);
	delay(500);
	digitalWrite(D5, 1);
	delay(500);
	digitalWrite(D6, 1);
	delay(500);
	digitalWrite(D7, 1);
	delay(500);
	digitalWrite(D8, 1);
}


void stopAll(){
	delay(500);
	digitalWrite(D1, 0);
	delay(500);
	digitalWrite(D2, 0);
	delay(500);
	digitalWrite(D3, 0);
	delay(500);
	digitalWrite(D4, 0);
	delay(500);
	digitalWrite(D5, 0);
	delay(500);
	digitalWrite(D6, 0);
	delay(500);
	digitalWrite(D7, 0);
	delay(500);
	digitalWrite(D8, 0);
}
