
class Button {
  private:
    int pin; // Пин, на котором завязана кнопка
    bool previousState; // Значение предыдущего состояния кнопки
    
  public:
  
    // Запрашиваем текущее состояние кнопки (true - зажата, false - отпущена)
    bool getState();
    
    // Получаем предыдущее состояние кнопки (без опроса пина)
    bool getPreviousState();

    // Конструктор, котортый принемает пин, на котором завязана кнопка
    Button(int pin);
};

#ifndef CPP_BUTTON
	#define CPP_BUTTON 1
	#include "Button.cpp"
#endif
