
Button::Button(int pin) {
  this->pin = pin;
  pinMode(pin, INPUT);
}

bool Button::getState() {
  return digitalRead(this->pin)!=HIGH;
}

bool Button::getPreviousState() {
  return this->previousState;
}
