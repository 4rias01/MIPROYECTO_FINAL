#ifndef ZORRO_H
#define ZORRO_H
#include "Individuo.h"
#include "Conejo.h"

class Zorro: public Individuo
{
    protected:

    public:
        Zorro();
        string tipo();
        virtual ~Zorro();
};
#else
class Zorro;

#endif // ZORRO_H
