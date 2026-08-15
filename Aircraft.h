#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <string>
#include <iostream>
#include <list>



class Aircraft
{
public:
    Aircraft(const std::string& zW, double p)
        : znakWywolawczy(zW), paliwo(p){
            skrzynka.zapisz("Utworzono obiekt: " + znakWywolawczy);
    }

    virtual ~Aircraft() = default;
    




protected:
    std::string znakWywolawczy;
    double paliwo;
    
    class CzarnaSkrzynka{
    public:
        void zapisz(const std::string& logi);
        void wyswietl() const;
    private:
        std::list<std::string> logi;
    };

    CzarnaSkrzynka skrzynka;
       
};

#endif // AIRCRAFT_H