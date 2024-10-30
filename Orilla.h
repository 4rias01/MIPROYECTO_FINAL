#ifndef ORILLA_H
#define ORILLA_H
#include "Lugar.h"

class Orilla: public Lugar
{
    protected:

    public:
        Orilla();
        Orilla(int); // CONSTRUCTOR PARA INICIALIZAR LA ORILLA DERECHA
        Orilla(int, int, int, int); // CONSTRUCTOR PARA INICIALIZAR LA ORILLA IZQUIERDA
        virtual ~Orilla();
};
#else
class Orilla;

#endif // ORILLA_H
