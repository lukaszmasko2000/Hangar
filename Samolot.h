#ifndef SAMOLOT_H
#define SAMOLOT_H

#include "Aircraft.h"

class Samotot : public Aircraft
{
    Aircraft::Aircraft;
    void fly() override
    {
        paliwo -= 10.5;
        addLog("Lot pasazerski kontynuowany. Zuzycie plaiwa: 10.5");
    }
};

#endif // SAMOLOT_H