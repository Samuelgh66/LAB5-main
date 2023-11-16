#include <QPainter>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QGraphicsItem>
#include <QGraphicsObject>
#include <QTimer>

#ifndef  BOMBA_H
#define  BOMBA_H

class BOMBA: public QGraphicsObject
{
    Q_OBJECT
protected:
       QTimer *timer;

    //Atributos privados de la clase BOMBA
    private:
        int posx,posy,alto,bajo,velocidad;
        bool exploded;

    //Métodos públicos de la clase BOMBA
    public:
        //Constructor con parámetros por defecto
        BOMBA(int x = 0, int y = 0 , int alto = 0 , int bajo = 0, int velocidad = 5);

        //Método para obtener el rectángulo que delimita la bomba
        QRectF boundingRect() const;

        //Método para pintar la bomba
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget= nullptr);

        //Método para obtener la posición x de la bomba
        float getPosx() const;

        //Método para obtener la posición y de la bomba
        float getPosy() const;

        //Método para cambiar la posición de la bomba
        void setPosicion(int newX, int newY);

        //Método para mover la bomba hacia arriba
        void MoveUp();

        //Método para mover la bomba hacia abajo
        void MoveDown();

        //Método para mover la bomba hacia la izquierda
        void MoveLeft();

        //Método para mover la bomba hacia la derecha
        void MoveRight();

        //Método para disparar la bomba
        void shot(int velx ,int vel);

        //Método para actualizar la posición de la bomba según la velocidad
        void updatePosicion();

        //Método para detonar la bomba
        void explode();

        void removeBomba();

        virtual ~BOMBA();
};

#endif // BOMBA_H

