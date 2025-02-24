/**********************************************************************
  Filename    : Doorbell
  Description : Control active buzzer by button.
  Auther      : www.freenove.com
  Modification: 2022/05/10
**********************************************************************/
#define PIN_BUZZER 5
#define PIN_BUTTON 4

void setup() {
  pinMode(PIN_BUZZER, OUTPUT);
  pinMode(PIN_BUTTON, INPUT);
}

void loop() {
  if (digitalRead(PIN_BUTTON) == LOW) {
    digitalWrite(PIN_BUZZER,HIGH);
  }else{
    digitalWrite(PIN_BUZZER,LOW);
  }
}
