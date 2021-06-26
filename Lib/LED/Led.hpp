class Led {
  private:
    int pin; // Пин, на котором завязан светодиод   
    
  public:  
    void On();  
    void Off();   

    // Конструктор, котортый принемает пин, на котором завязан светодиод
    Led(int pin);
};

#ifndef CPP_LED
	#define CPP_LED 1
	#include "Led.cpp"
#endif