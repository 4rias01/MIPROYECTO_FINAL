#include "Validar.h"
#include <iostream>

using namespace std;

Validar::Validar()
{
    //ctor
}

string Validar::leer(string mensaje)
{
    string aux;
    do
    {
        cout << mensaje;
        getline (cin, aux);
        if (aux.empty() == true)
            cout << "No digito ningun dato" << endl;
    }while(aux.empty() == true);

    return aux;
}

int Validar::leernum(string mensaje)
{
    string aux;
    do
    {
        cout << mensaje;
        getline (cin, aux);
        if (stoi(aux) <= 0)
            cout << "Dato incorrecto, vuelva a digitar!" << endl;
    }while(stoi(aux) <= 0);

    return stoi(aux);
}

string Validar::minuscula(string auxiliar)
{
    string aux = "";
    for (int i = 0; i < auxiliar.length(); i++)
    {
        aux += tolower(auxiliar[i]);
    }
    return aux;
}

Validar::~Validar()
{
    //dtor
}
