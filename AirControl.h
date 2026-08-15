#ifndef AIRCONTROL_H
#define AIRCONTROL_H

#include "Aircraft.h"
#include <vector>
#include <memory>
#include <iostream>


class AirControl
{
public:
    void dodajDoHangaru(std::unique_ptr<Aircraft> a);
    void przekazDoLadowania(const std::string& fragment);
    void symulujKolejke();
    void wyswietlRaportyKoncowe() const;

private:
    std::vector<std::unique_ptr<Aircraft>> hangar;
    std::vector<std::unique_ptr<Aircraft>> kolejkaLotow;
};




#endif // AIRCONTROL_H