#include "Lugar.h"
#include <typeinfo>


Lugar::Lugar() //TODOS LOS LUGARES COMIENZAN VACIOS. EN LAS CLASES HIJAS SE INICIALIZAN DIFERENTE
{
    estantes = nullptr;
    cant = 0;
}


bool Lugar::whRobot() // ME INTERESA SABER SI EL ROBOT ESTA O NO EN CIERTO LUGAR
{
    for (int i = 0; i < cant; i++)
    {
        Individuo ind = *estantes[i];
        if (ind.tipo() == "robot") // VERIFICO SI EL OBJETO DE LA POSICION I ES UN ROBOT
            return true;
    }
    return false;
}

void Lugar::borrarObjetos()
{
    for (int i = 0; i < cant; i++)
    {
        delete estantes[i];
        estantes[i] = nullptr;
    }
    delete[] estantes;
    estantes = nullptr;
}


Lugar::~Lugar()
{
    //dtor
}
