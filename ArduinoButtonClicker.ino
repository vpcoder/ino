#include "Lib/Button.hpp"
#include "Lib/Led.hpp"

Button* button;
Led*    led;

void setup()
{
  button = new Button(5);
  led    = new Led(13);
}

void loop()
{
  if(button->getState()) {
    led->On();
  } else {
    led->Off();
  }
}
