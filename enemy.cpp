#include "enemy.h"

// Constructor por defecto de ENEMY
ENEMY::ENEMY()
{
    this->radio=25;
    this->velocidad=5;
}

// Constructor de ENEMY con parámetros
ENEMY::ENEMY(int x, int y, int r)
{
    // Asignación de valores de ENEMY
    this->posx=x;
    this->posy=y;
    this->radio=r;
    this->velocidad=1.5;
    setPos(posx,posy);
}

// Métodos para obtener y establecer la posición x de ENEMY
int ENEMY::getPosx() const
{
    return posx;
}

void ENEMY::setPosx(int newPosx)
{
    posx = newPosx;
}

// Métodos para obtener y establecer la posición y de ENEMY
int ENEMY::getPosy() const
{
    return posy;
}

void ENEMY::setPosy(int newPosy)
{
    posy = newPosy;
}

// Métodos para obtener y establecer la velocidad de ENEMY
int ENEMY::getVelocidad() const
{
    return velocidad;
}

void ENEMY::setVelocidad(int newVelocidad)
{
    velocidad = newVelocidad;
}

// Método para obtener el rectángulo delimitador de ENEMY
QRectF ENEMY::boundingRect() const
{
    return QRectF(posx,posy,2*radio,2*radio);
}

// Método para pintar ENEMY en la escena
void ENEMY::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap ninja(":/imagen/fantasma (1).png");
    painter->drawPixmap(boundingRect(),ninja,ninja.rect());
}

// Métodos para mover ENEMY en diferentes direcciones
void ENEMY::MoveUp()
{
    posy-=velocidad;
    setPos(posx, posy);
}

void ENEMY::MoveDown()
{
    posy+=velocidad;
    setPos(posx, posy);
}

void ENEMY::MoveLeft()
{
    posx-=velocidad;
    setPos(posx, posy);
}

void ENEMY::MoveRight()
{
    posx+=velocidad;
    setPos(posx, posy);
}
