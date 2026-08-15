#include "Aircraft.h"


void Aircraft::addLog(const std::string& log)
{
    skrzynka.zapisz(log);
}

void Aircraft::raportCzarnejSkrzynki() const
{
    skrzynka.wyswietl();
}


void Aircraft::CzarnaSkrzynka::zapisz(const std::string& logi)
{
    this->logi.push_back(logi);
}

void Aircraft::CzarnaSkrzynka::wyswietl() const
{
    std::cout << "--- Zawartosc Czarnej Skrzynki ---" << std::endl;
    for (const auto& l : logi)
        std::cout << l << std::endl;
}