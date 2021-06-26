Led::Led(int pin) {
  this->pin = pin;
  pinMode(pin, OUTPUT);
}

void Led::On(){
    digitalWrite(pin, HIGH);
}

void Led::Off(){
    digitalWrite(pin, LOW);
}