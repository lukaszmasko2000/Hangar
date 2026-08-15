#include "GeneratorLotow.h"
#include "AirControl.h"
#include "Samolot.h"
#include "Dron.h"

#include <iostream>


int main(void)
{
    std::setlocale(LC_ALL, "Polish");

    GeneratorLotow& generator = GeneratorLotow::getInstance();
    AirControl kontrolaLotow;

    for (auto i{0} ; i < 7 ; ++i)
    {
        std::string znak = generator.generujZnakWywolawczy();
        auto paliwo = generator.losujRozkladNormalny(100.0, 20.0);
        if (i % 2 == 0) kontrolaLotow.dodajDoHangaru(std::make_unique<Samolot>(znak, paliwo));
        else kontrolaLotow.dodajDoHangaru(std::make_unique<Dron>(znak, paliwo));
    }

    kontrolaLotow.przekazDoLadowania("-");
    kontrolaLotow.symulujKolejke();
    kontrolaLotow.wyswietlRaportyKoncowe();

    return 0;
}
