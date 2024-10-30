#ifndef CONEJO_H
#define CONEJO_H
#include "Individuo.h"

class Conejo: public Individuo
{
    protected:

    public:
        Conejo();
        string tipo();
        virtual ~Conejo();
};
#else
class Conejo;

#endif // CONEJO_H
