#define CLK 6
#define DT 5

#include "GyverEncoder.h"
Encoder enc1(CLK, DT); // Кнопка энкодера не используется

void setup() {
  Serial.begin(9600);
}

void loop() {
  enc1.tick(); 
  
  if (enc1.isTurn()) {     // если был совершён поворот (индикатор поворота в любую сторону)
    // ваш код
  }
  
  if (enc1.isRight()) Serial.println("Right");         // если был поворот
  if (enc1.isLeft()) Serial.println("Left");
}
