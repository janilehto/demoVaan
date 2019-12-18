#ifndef FIKKARI_H
#define FIKKARI_H

#include <Arduino.h>

#define LEDON 255
#define TASO1 180
#define TASO2 100
#define LEDOFF 0
#define FILTER 20

class fikkari
{
  public:
    fikkari(int P, int L);  //Konstruktori
    void handle();
  private:
    bool buttonIsPressed();
    void changeState();
    int _oldState;//Painikkeen tilojen seurantaa varten
    int _valaistusTaso = LEDOFF;
    int _P, _L;//Liitännät
};

#endif FIKKARI_H
