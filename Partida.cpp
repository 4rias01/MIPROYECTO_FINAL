#include "Partida.h"


Partida::Partida() // PARTIDA SIN NADA PRACTICAMENTE
{
    cantIndividuos = 0;
    arrIndividuos = nullptr;

}

Partida::Partida(int rob, int con, int zor, int lec) // PARTIDA QUE EMPIEZA CON LA CANT DE INDIVIDUOS QUE ME PIDAN
{
    cantIndividuos = rob + con + zor + lec;

    arrIndividuos = new Individuo*[cantIndividuos];
    barco = Barca();
    orillaIzquierda = Orilla(rob, con, zor, lec);
    orillaDerecha = Orilla(cantIndividuos);
}

void Partida::borrarObjetos() 
{
    // PRIMERO BORRAR EL ARREGLO DE INDIVIDUOS
    for (int i = 0; i < cantIndividuos; i++)
    {
        delete arrIndividuos[i]; 
        arrIndividuos[i] = nullptr;
    }
    delete[] arrIndividuos;
    arrIndividuos = nullptr;

    // LUEGO PARA CADA CLASE DE LUGAR LLAMAMOS A SU METODO BORRAR (SE ENCUENTRA EN LUGAR CPP, METODO PADRE)
    barco.borrarObjetos();
    orillaDerecha.borrarObjetos();
    orillaIzquierda.borrarObjetos();
}

Partida::~Partida()
{
    //dtor
}

