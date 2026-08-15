#include "GeneratorLotow.h"



int GeneratorLotow::losujLiczbe(int min, int max)
{
    std::uniform_int_distribution<int> rozklad(min, max);
    return rozklad(silnik);
}

double GeneratorLotow::losujRozkladNormalny(double srednia, double odchylenie)
{
    std::normal_distribution<double> rozklad(srednia, odchylenie);
    return rozklad(silnik);
}

std::string GeneratorLotow::generujZnakWywolawczy()
{
    const std::string litery = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string kod{};
    for (int i = 0; i < 3; i++) 
    {
        kod += litery[losujLiczbe(0, 25)];
    }

    kod += "-";
    kod += std::to_string(losujLiczbe(100, 999));

    return kod;
}