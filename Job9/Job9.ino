#define RED_LED 1

void setup() {
   pinMode(0, OUTPUT);
   pinMode(1, OUTPUT);
}

void loop() {
   analogWrite(RED_LED, 0);
   delay(1000);
   analogWrite(RED_LED, 50);
   delay(2000);
   analogWrite(RED_LED, 100);
   delay(3500);
   analogWrite(RED_LED, 150);
   delay(5000);
   analogWrite(RED_LED, 200);
   delay(6500);
   analogWrite(RED_LED, 255);
   delay(8000);
}