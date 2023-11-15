#include "bomba.h"

//Implementación del constructor
BOMBA::BOMBA(int x, int y, int alto, int bajo, int velocidad)
{
    this->posx=x;
    this->posy=y;
    this->alto=alto;
    this->bajo=bajo;
    this->velocidad=velocidad;
    setPos(posx,posy);
}

//Implementación del método para obtener el rectángulo que delimita la bomba
QRectF BOMBA::boundingRect() const
{
    return QRect(posx,posy,alto,bajo);
}

//Implementación del método para pintar la bomba
void BOMBA::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap ninja(":/imagen/fuego.png");
    painter->drawPixmap(boundingRect(),ninja,ninja.rect());
}

//Implementación del método para obtener la posición x de la bomba
float BOMBA::getPosx() const
{
    return posx;
}

//Implementación del método para obtener la posición y de la bomba
float BOMBA::getPosy() const
{
    return posy;
}

//Implementación del método para cambiar la posición de la bomba
void BOMBA::setPosicion(int newX, int newY)
{
    posx=newX;
    posy=newY;
    setPos(posx,posy);
}

//Implementación del método para mover la bomba hacia arriba
void BOMBA::MoveUp()
{
    posy-=velocidad;
    setPosicion(posx, posy);
}

//Implementación del método para mover la bomba hacia abajo
void BOMBA::MoveDown()
{
    posy+=velocidad;
    setPosicion(posx, posy);
}

//Implementación del método para mover la bomba hacia la izquierda
void BOMBA::MoveLeft()
{
    posx-=velocidad;
    setPosicion(posx, posy);
}

//Implementación del método para mover la bomba hacia la derecha
void BOMBA::MoveRight()
{
    posx+=velocidad;
    setPosicion(posx, posy);
}

//Implementación del método para disparar la bomba
void BOMBA::shot(int velx,int vel)
{
    setPosicion(posx+velx,posy+vel);
}

//Implementación del método para actualizar la posición de la bomba según la velocidad
void BOMBA::updatePosicion()
{
    setPosicion(posx+velocidad,posy+velocidad);
}
