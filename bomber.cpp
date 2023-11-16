#include "bomber.h"

// Constructor por defecto de BOMBER
BOMBER::BOMBER()
{
    this->radio=25;
    this->velocidad=1;
}

// Constructor de BOMBER con parámetros
BOMBER::BOMBER(int x, int y, int r)
{
    // Asignación de valores de BOMBER
    this->posx=x;
    this->posy=y;
    this->radio=r;
    this->velocidad=10;
    setPos(posx,posy);
}

// Métodos para obtener y establecer la posición x de BOMBER
int BOMBER::getPosx() const
{
    return posx;
}

void BOMBER::setPosx(int newPosx)
{
    posx = newPosx;
}

// Métodos para obtener y establecer la posición y de BOMBER
int BOMBER::getPosy() const
{
    return posy;
}

void BOMBER::setPosy(int newPosy)
{
    posy = newPosy;
}

// Métodos para obtener y establecer la velocidad de BOMBER
int BOMBER::getVelocidad() const
{
    return velocidad;
}

void BOMBER::setVelocidad(int newVelocidad)
{
    velocidad = newVelocidad;
}

// Método para obtener el rectángulo delimitador de BOMBER
QRectF BOMBER::boundingRect() const
{
    return QRectF(posx,posy,2*radio,2*radio);
}

// Método para pintar BOMBER en la escena
void BOMBER::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap ninja(":/imagen/ninja.png");
    painter->drawPixmap(boundingRect(),ninja,ninja.rect());
}

// Métodos para mover BOMBER en diferentes direcciones
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
