#ifndef INDIVIDUO_H
#define INDIVIDUO_H
#include <iostream>
#include <string>
#include "Validar.h"

class Individuo
{
    protected:
        bool vivo; // EL INDIVIDUO SIGUE VIVO O MUERTO
        bool estOrillaIzquierda; //EL INDIVIDUO ESTA O NO ESTA EN LA ORILLA IZQUIERDA/BARCO, SINO ESTA EN LA DERECHA

    public: // FUNCIONES EXPLICADAS EN EL CPP
        Individuo();
        void setVivo(); 
        void llegar();
        void irse();
        bool getVivo();
        virtual string tipo();
        virtual ~Individuo();
};
#else
class Individuo;

#endif // INDIVIDUO_H