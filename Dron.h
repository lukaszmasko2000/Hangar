#ifndef DRON_H
#define DRON_H

#include "Aircraft.h"

class Dron : public Aircraft
{
    Aircraft::Aircraft;
    void fly() override
    {
        paliwo -= 2.0;
        addLog("Dron w trybie zawisu. Zuzycie energii: 2.0");
    }
};



#endif // DRON_H