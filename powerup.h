#ifndef POWERUP_H
#define POWERUP_H

#include <QGraphicsItem>
#include <QPainter>

class PowerUp : public QGraphicsItem {
public:
    PowerUp(std::string type, int duration, QImage image);

    std::string getType() const;
    int getDuration() const;
    QImage getImage() const;

    void setType(const std::string &newType);
    void setDuration(int newDuration);
    void setImage(const QImage &newImage);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    std::string type;
    int duration;
    QImage image;
    int posx, posy, radio;
};

#endif // POWERUP_H
