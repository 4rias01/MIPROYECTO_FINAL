#ifndef VALIDAR_H
#define VALIDAR_H
#include <iostream>
#include <string>
using namespace std;

class Validar
{
    public:
        Validar();
        string leer(string);
        int leernum(string);
        string minuscula(string);
        virtual ~Validar();
};
#else
class Validar;

#endif // VALIDAR_H
