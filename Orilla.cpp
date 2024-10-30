#include "Orilla.h"


Orilla::Orilla(): Lugar()
{
    //ctor
}

Orilla::Orilla(int tam) // ME DAN EL TAMAÑO POR ADELANTADO
{
    estantes = new Individuo*[tam];
    cant = tam;
}


Orilla::Orilla(int cRobots, int cConejos, int cZorros, int cLechugas) // TENGO EN CUENTA EL NUM DE CADA INDIVIDUO
{
    cant = cRobots + cConejos + cZorros + cLechugas;
    estantes = new Individuo*[cant]; // EL ARREGLO CONTIENE PUNTEROS DE INDIVIDUOS
    int aux = 0; // AUXILIAR PARA RECORRER LOS 4 FORS, EL SIGUIENTE JUSTO DONDE SE QUEDO EL ANTERIOR

    for (int i = 0; i < cRobots; i++)
    {
        estantes[i] = new Robot();
        aux++;
    }
    for (int e = aux; e < cConejos; e++)
    {
        estantes[e] = new Conejo();
        aux++;
    }
    for (int a = aux; a < cZorros; a++)
    {
        estantes[a] = new Zorro();
        aux++;
    }
    for (int o = aux; o < cLechugas; o++)
    {
        estantes[o] = new Lechuga();
        aux++; // esto ya es innecesario xd
    }

}

Orilla::~Orilla()
{
    //dtor
}
