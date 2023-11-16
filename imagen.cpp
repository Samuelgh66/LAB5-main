/*
#include "imagen.h"

//Implementación del constructor
IMAGEN::IMAGEN(int x, int y, int alto, int bajo, int velocidad, QString ruta)
{
    //Asignación de los valores de los parámetros a los atributos de la clase
    this->posx=x;
    this->posy=y;
    this->alto=alto;
    this->bajo=bajo;
    this->velocidad=velocidad;
    this->ruta=ruta;
    //Llamada al método para cambiar la posición de la imagen
    setPosicion(posx,posy);
}

//Implementación del método para obtener el rectángulo que delimita la imagen
QRectF IMAGEN::boundingRect() const
{
    //Retorno de un objeto QRect con las coordenadas y dimensiones de la imagen
    return QRect(posx,posy,alto,bajo);
}

//Implementación del método para pintar la imagen
void IMAGEN::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //Creación de un objeto QPixmap con la imagen de la ruta
    QPixmap imagen(ruta);
    //Dibujo de la imagen en el rectángulo que la delimita
    painter->drawPixmap(boundingRect(),imagen,imagen.rect());
}

//Implementación del método para obtener la posición x de la imagen
float IMAGEN::getPosx() const
{
    //Retorno del valor del atributo posx
    return posx;
}

//Implementación del método para obtener la posición y de la imagen
float IMAGEN::getPosy() const
{
    //Retorno del valor del atributo posy
    return posy;
}

//Implementación del método para cambiar la posición de la imagen
void IMAGEN::setPosicion(int newX, int newY)
{
    //Asignación de los nuevos valores de x e y a los atributos posx y posy
    posx=newX;
    posy=newY;
    //Llamada al método setPos de la clase QGraphicsItem para cambiar la posición de la imagen
    setPos(posx,posy);
}

//Implementación del método para mover la imagen hacia arriba
void IMAGEN::MoveUp()
{
    //Resta de la velocidad al atributo posy para mover la imagen hacia arriba
    posy-=velocidad;
    //Llamada al método para cambiar la posición de la imagen
    setPosicion(posx, posy);
}

//Implementación del método para mover la imagen hacia abajo
void IMAGEN::MoveDown()
{
    //Suma de la velocidad al atributo posy para mover la imagen hacia abajo
    posy+=velocidad;
    //Llamada al método para cambiar la posición de la imagen
    setPosicion(posx, posy);
}

//Implementación del método para mover la imagen hacia la izquierda
void IMAGEN::MoveLeft()
{
    //Resta de la velocidad al atributo posx para mover la imagen hacia la izquierda
    posx-=velocidad;
    //Llamada al método para cambiar la posición de la imagen
    setPosicion(posx, posy);
}

//Implementación del método para mover la imagen hacia la derecha
void IMAGEN::MoveRight()
{
    //Suma de la velocidad al atributo posx para mover la imagen hacia la derecha
    posx+=velocidad;
    //Llamada al método para cambiar la posición de la imagen
    setPosicion(posx, posy);
}

//Implementación del método para disparar la imagen
void IMAGEN::shot(int velx,int vel)
{
    //Llamada al método para cambiar la posición de la imagen según la velocidad de disparo
    setPosicion(posx+velx,posy+vel);
}

//Implementación del método para actualizar la posición de la imagen según la velocidad
void IMAGEN::updatePosicion()
{
    //Llamada al método para cambiar la posición de la imagen según la velocidad de movimiento
    setPosicion(posx+velocidad,posy+velocidad);
}
*/
