
#include "bomber.h"
//con QGraficsItem Volvemos BOMBER un Item GRafico
int BOMBER::getPosx() const
{
    return posx;
}

void BOMBER::setPosx(int newPosx)
{
    posx = newPosx;
}

int BOMBER::getPosy() const
{
    return posy;
}

void BOMBER::setPosy(int newPosy)
{
    posy = newPosy;
}

int BOMBER::getVelocidad() const
{
    return velocidad;
}

void BOMBER::setVelocidad(int newVelocidad)
{
    velocidad = newVelocidad;
}

BOMBER::BOMBER()
{
    this->radio=25;
    this->velocidad=1;

}


BOMBER::BOMBER(int x, int y, int r)
{
    // ASIGNACION DE VALORES DE BOMBER
    this->posx=x;
    this->posy=y;
    this->radio=r;
    this->velocidad=10;
    setPos(posx,posy);
}

QRectF BOMBER::boundingRect() const
{
    return QRectF(posx,posy,2*radio,2*radio);
}

void BOMBER::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    QPixmap ninja(":/imagen/ninja.png");
    painter->drawPixmap(boundingRect(),ninja,ninja.rect());


}

void BOMBER::MoveUp()
{
    posy-=velocidad;
    setPos(posx, posy);
}

void BOMBER::MoveDown()
{
    posy+=velocidad;
    setPos(posx, posy);
}

void BOMBER::MoveLeft()
{
    posx-=velocidad;
    setPos(posx, posy);
}

void BOMBER::MoveRight()
{
    posx+=velocidad;
    setPos(posx, posy);
}
