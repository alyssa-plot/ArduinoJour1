int ledPin = 1; 

void setup()
{
}

void loop()
{
    for (int fadeValue =0; fadeValue <= 255; fadeValue ++){
        analogWrite(ledPin, fadeValue);
        delay(500);
    }

    for (int fadeValue =255; fadeValue >= 0; fadeValue --){
        analogWrite(ledPin, fadeValue);
        delay(10);
    }
}