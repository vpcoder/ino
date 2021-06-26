
Button::Button(int pin) {
  this->pin = pin;
  pinMode(pin, INPUT);
}

bool Button::getState() {
	bool currentState = digitalRead(this->pin) == HIGH;
	this->previousState = currentState;
	return currentState;
}

bool Button::getPreviousState() {
  return this->previousState;
}
