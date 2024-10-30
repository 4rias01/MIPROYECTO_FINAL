#include "Robot.h"


Robot::Robot(): Individuo()
{
    //ctor
}

string Robot::tipo()
{
    return "robot"; // FUNCION PARA IDENTIFICAR AL ROBOT
}

Robot::~Robot()
{
    //dtor
}
