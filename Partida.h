#ifndef PARTIDA_H
#define PARTIDA_H
#include "Individuo.h"
#include "Lugar.h"
#include "Conejo.h"
#include "Zorro.h"
#include "Lechuga.h"
#include "Robot.h"
#include "Orilla.h"
#include "Barca.h"

// IMPORTANTE: 

// FALTA POR IMPLEMENTAR EN ESTA CLASE LOS METODOS PARA QUE LOS INDIVIDUOS SE MUEVAN DE UN LUGAR A OTRO, 
// Y PARA HACER MOVER A LA BARCA CON ELLOS
// OTRO METODO QUE COMPRUEBE QUE ESTAN VIVOS Y OTRO QUE 
// VEA SI YA LLEGARON TODOS A ORILLA DERECHA

class Partida
{
    protected:
        Individuo **arrIndividuos; // ARRAY DINAMICO DE INDIVIDUOS DINAMICOS
        Orilla orillaIzquierda;
        Barca barco;
        Orilla orillaDerecha;
        int cantIndividuos; // CANTIDAD EN TOTAL DE INDIVIDUOS

    public:
        Partida();
        Partida (int, int, int, int);
        void borrarObjetos(); // BORRAR LOS OBJETOS AL TERMINAR LA PARTIDA
        virtual ~Partida();
};
#else
class Partida;

#endif // PARTIDA_H
