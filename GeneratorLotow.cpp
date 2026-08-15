#include "GeneratorLotow.h"

using namespace std::string_literals;

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
    const auto litery = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"s;
    auto kod = ""s;
    for (int i = 0; i < 3; i++) 
    {
        kod += litery[losujLiczbe(0, 25)];
    }

    kod += "-";
    kod += std::to_string(losujLiczbe(100, 999));

    return kod;
}