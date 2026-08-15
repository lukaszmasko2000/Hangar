#ifndef GENERATORLOTOW_H
#define GENERATORLOTOW_H

#include <iostream>
#include <string>
#include <random>


class GeneratorLotow
{
public:
    static GeneratorLotow& getInstance()
    {
        static GeneratorLotow instance;
        return instance;
    }

    


private:
    std::mt19937 silnik;

    GeneratorLotow() : silnik(std::random_device{}()) {}
    GeneratorLotow(const GeneratorLotow&) = delete;
    GeneratorLotow& operator=(const GeneratorLotow&) = delete;

};









#endif // GENERATORLOTOW_H