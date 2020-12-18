#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QGraphicsRectItem>
#include <QBrush>


class personaje: public QGraphicsRectItem
{
public:
    personaje(int x);
    void pintura();
    void tamano();
private:
    int player;
};

#endif // PERSONAJE_H
