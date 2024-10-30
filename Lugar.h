#ifndef LUGAR_H
#define LUGAR_H
// LUGAR CONOCE A INDIVIDUOS
#include "Individuo.h"
#include "Conejo.h"
#include "Zorro.h"
#include "Lechuga.h"
#include "Robot.h"

class Lugar
{
    protected: // CADA LUGAR TIENE UN ARREGLO DE "ESTANTES" O PASAJEROS Y LA CANTIDAD DE ELLOS
        int cant; 
        Individuo** estantes; // ARREGLO DINAMICO DE OBJETOS DINAMICOS, O PUNTERO DE PUNTEROS, COMO PREFIERAN

    public: 
        Lugar();
        bool whRobot(); // FUNCION PARA SABER SI EN UN LUGAR SE ENCUENTRA EL ROBOT
        void borrarObjetos(); // FUNCION PARA BORRAR LOS OBJETOS DINAMICOS Y EL ARRAY
        virtual ~Lugar();
};
#else
class Lugar;

#endif // LUGAR_H