#include "Individuo.h"
#include <time.h>


Individuo::Individuo() // EL INDIVIDUO EMPIEZA VIVO Y EN LA ORILLA IZQUIERDA
{
    vivo = true;
    estOrillaIzquierda = true;
}

void Individuo::setVivo() // CON ESTA FUNCION EL INDIVIDUO SE PALETEA
{
    vivo = false;
}

void Individuo::llegar() // FUNCION DE CUANDO LLEGA A LA ORILLA DERECHA
{
    estOrillaIzquierda = false;
}

void Individuo::irse() // FUNCION DE CUANDO SE VA DE LA ORILLA DERECHA
{
    estOrillaIzquierda = true;
}

string Individuo::tipo() // FUNCION QUE HEREDAN LOS HIJOS (POLIMORFISMO)PARA IDENTIFICAR LA CLASE (ROBOT, CONEJO, ETC)
{
    return "nada";
}

Individuo::~Individuo()
{
    //dtor
}

bool Individuo::getVivo() // FUNCION PARA SABER SI UN INDIVIDUO SIGUE VIVO O NO
{
    return vivo;
}