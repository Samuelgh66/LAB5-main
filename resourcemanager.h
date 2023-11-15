// resourcemanager.h
#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H

#include <QImage>

class ResourceManager {
public:
    static QImage loadImage(const QString &filename);

};

#endif // RESOURCEMANAGER_H
