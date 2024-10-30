#include "Barca.h"


Barca::Barca(): Lugar() // BARCA SE INICIALIZA SIEMPRE CON UN TAMAÑO DE 2 Y SIN PASAJEROS/ESTANTES
{
    posIzquierda = true;
    estantes = new Individuo*[2];
    cant = 2;
    for (int i = 0; i < 2; i++) // LOS PUNTEROS NO APUNTAN A NADA
        estantes[i] = nullptr;
}

void Barca::moverse()
{
    if (posIzquierda == true) // SI LA BARCA ESTA EN LA IZQUIERDA, PASA A LA DERECHA
        posIzquierda = false;
    else
        posIzquierda = true; // SI ESTABA EN LA DERECHA, PASA A LA IZQUIERDA
}

Barca::~Barca()
{
    //dtor
}
