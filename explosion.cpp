#include "explosion.h"
#include <QGraphicsScene>

EXPLOSION::EXPLOSION(int x, int y, int alto, int bajo, int velocidad)
    : BOMBA(x, y, alto, bajo, velocidad)
{
    timer->stop(); // Detiene el QTimer del constructor base (BOMBA)
    timer->start(3000); // Reinicia el QTimer para que la explosión se elimine después de 3 segundos
    explode(); // Llama a explode después de configurar el timer
}

EXPLOSION::~EXPLOSION()
{
    timer->stop();
    delete timer;
    scene()->removeItem(this); // Asegúrate de eliminar la explosión de la escena antes de eliminarla
    delete this;
}
