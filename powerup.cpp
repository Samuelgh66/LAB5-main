/*
#include "PowerUp.h"

PowerUp::PowerUp(std::string type, int duration, QImage image) : type(type), duration(duration), image(image) {}

std::string PowerUp::getType() const {
    return type;
}

int PowerUp::getDuration() const {
    return duration;
}

QImage PowerUp::getImage() const {
    return image;
}

void PowerUp::setType(const std::string &newType) {
    type = newType;
}

void PowerUp::setDuration(int newDuration) {
    duration = newDuration;
}

void PowerUp::setImage(const QImage &newImage) {
    image = newImage;
}

QRectF PowerUp::boundingRect() const {
    return QRectF(posx, posy, 2*radio, 2*radio);
}

void PowerUp::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    painter->drawPixmap(boundingRect(), image, image.rect());
}
*/
