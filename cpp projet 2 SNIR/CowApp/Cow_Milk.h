// classe_fille.h
// Cow_Milk.h
#ifndef COW_MILK_H
#define COW_MILK_H

#include "Cow.h"

class CowMilk : public Cow {
public:
    CowMilk(const std::string& Nom, int age, int ProductionLait);
    int traite(int totalLait);
    void afficher(); 

private:
    int ProductionLait; 
};

#include "Cow_Milk.cpp"
#endif 
