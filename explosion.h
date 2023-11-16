#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "bomba.h"

class EXPLOSION: public BOMBA
{
    public:
        EXPLOSION(int x = 0, int y = 0 , int alto = 0 , int bajo = 0, int velocidad = 5);
        ~EXPLOSION();
};

#endif // EXPLOSION_H
