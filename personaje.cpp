#include "personaje.h"

personaje::personaje(int x)
{
    player = x;
    pintura();
    tamano();
}

void personaje::pintura()
{
    if(player == 1){
        setBrush(Qt::red);
    }
    if(player == 2){
        setBrush(Qt::blue);
    }
}

void personaje::tamano()
{
    setRect(0,0,25,25);
}
