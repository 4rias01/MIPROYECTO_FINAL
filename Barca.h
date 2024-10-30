#ifndef BARCA_H
#define BARCA_H
#include "Lugar.h"

class Barca: public Lugar // BARCA HEREDA DE LUGAR
{
    protected:
        bool posIzquierda; // BOOL PARA SABER SI LA BARCA ESTA PEGADA A LA ORILLA IZQUIERDA O NO

    public:
        Barca();
        void moverse(); /// LA BARCA SE MUEVE DE ORILLA A ORILLA, CAMBIA A POSIZQUIERDA
        virtual ~Barca();
};
#else
class Barca;

#endif // BARCA_H
