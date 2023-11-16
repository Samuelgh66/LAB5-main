#include "bomba.h"
#include <QGraphicsScene>

//Implementación del constructor
BOMBA::BOMBA(int x, int y, int alto, int bajo, int velocidad)
    : QGraphicsObject(), posx(x), posy(y), alto(alto), bajo(bajo), velocidad(velocidad)
{
    this->posx=x;
    this->posy=y;
    this->alto=alto;
    this->bajo=bajo;
    this->velocidad=velocidad;
    this->exploded=false;
    setPos(posx,posy);
    timer = new QTimer(this);
       connect(timer, SIGNAL(timeout()), this, SLOT(removeBomba()));
       timer->start(3000); // La bomba se eliminará después de 3 segundos
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
    QPixmap explosion(":/imagen/explosion.png");
    if (!exploded) {
        painter->drawPixmap(boundingRect(),ninja,ninja.rect());
    } else {
        painter->drawPixmap(boundingRect(),explosion,explosion.rect());
    }
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

void BOMBA::explode() {
    this->exploded = true;
}

void BOMBA::removeBomba()
{
    scene()->removeItem(this);
    delete this;
}

BOMBA::~BOMBA()
{

}
