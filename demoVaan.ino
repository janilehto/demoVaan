#include "fikkari.h"

fikkari T1(5, 6);//Luodaan ilmentymä meidän luokasta
fikkari T2(3, 4);//Luodaan ilmentymä meidän luokasta

void setup(){
}

void loop(){
  T1.handle();
  T2.handle();
}
