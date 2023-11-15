// resourcemanager.cpp
#include "resourcemanager.h"
#include <QtDebug>
QImage ResourceManager::loadImage(const QString &filename) {
    QImage image;
    if (image.load(filename)) {
        // La imagen se cargó correctamente
        return image;
    } else {
        // Manejar el error de carga de imagen
        // Por ejemplo, puedes imprimir un mensaje de error
        qDebug() << "Error cargando la imagen:" << filename;

        // Devolver una imagen vacía en caso de error
        return QImage();
    }
}

// Puedes agregar más implementaciones de funciones aquí si es necesario
