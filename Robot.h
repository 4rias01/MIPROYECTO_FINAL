#ifndef ROBOT_H
#define ROBOT_H
#include "Individuo.h"

class Robot: public Individuo
{
    protected:

    public:
        Robot();
        string tipo();
        virtual ~Robot();
};
#else
class Robot;

#endif // ROBOT_H
