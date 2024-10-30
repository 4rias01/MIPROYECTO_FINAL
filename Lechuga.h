#ifndef LECHUGA_H
#define LECHUGA_H
#include "Individuo.h"

class Lechuga: public Individuo
{
    protected:

    public:
        Lechuga();
        string tipo();
        virtual ~Lechuga();
};
#else
class Lechuga;

#endif // LECHUGA_H
