
Button::Button(int pin) {
  this->pin = pin;
  pinMode(pin, INPUT);
}

bool Button::getState() {
  return digitalRead(this->pin);
}

bool Button::getPreviousState() {
  return this->previousState;
}
