/*
#ifndef IMAGEN_H
#define IMAGEN_H

#include <QPainter>
#include <QGraphicsPixmapItem>
#include <QPixmap>

#include <QGraphicsItem>

//Definición de la clase IMAGEN, que hereda de QGraphicsItem
class IMAGEN: public QGraphicsItem
{
    //Atributos privados de la clase IMAGEN
    private:
        int posx,posy,alto,bajo,velocidad; //Posición, dimensiones y velocidad de la imagen
        QString ruta; //Ruta de la imagen en el disco

    //Métodos públicos de la clase IMAGEN
    public:
        //Constructor con parámetros por defecto
        IMAGEN(int x = 0, int y = 0 , int alto = 0 , int bajo = 0, int velocidad = 0, QString ruta = "");

        //Método para obtener el rectángulo que delimita la imagen
        QRectF boundingRect() const;

        //Método para pintar la imagen
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget= nullptr);

        //Método para obtener la posición x de la imagen
        float getPosx() const;

        //Método para obtener la posición y de la imagen
        float getPosy() const;

        //Método para cambiar la posición de la imagen
        void setPosicion(int newX, int newY);

        //Método para mover la imagen hacia arriba
        void MoveUp();

        //Método para mover la imagen hacia abajo
        void MoveDown();

        //Método para mover la imagen hacia la izquierda
        void MoveLeft();

        //Método para mover la imagen hacia la derecha
        void MoveRight();

        //Método para disparar la imagen
        void shot(int velx ,int vel);

        //Método para actualizar la posición de la imagen según la velocidad
        void updatePosicion();
};

#endif // IMAGEN_H
*/
