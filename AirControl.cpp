#include "AirControl.h"



void AirControl::dodajDoHangaru(std::unique_ptr<Aircraft> a)
{
    hangar.push_back(std::move(a));
}

void AirControl::przekazDoLadowania(const std::string& fragment)
{
    std::cout << "Szukanie jednostek z fragmentem '" << fragment << "'..." << std::endl;
    auto it = hangar.begin();
    while (it != hangar.end())
    {
        if ((*it)->getZnak().find(fragment) != std::string::npos)
        {
            (*it)->addLog("Podejscie do ladowania.");
            kolejkaLotow.push_back(std::move(*it));
            it = hangar.erase(it);
        }
        else ++it;
    }
}


void AirControl::symulujKolejke()
{
    std::cout << "\n--- SYMULACJA RUCHU W POWIETRZU ---" << std::endl;
    for (const auto& a : kolejkaLotow)
    {
        a->fly();
        std::cout << *a << "(Status: W POWIETRZU)" << std::endl;
    }
}