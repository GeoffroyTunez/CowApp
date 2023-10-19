// classe_fille2.h
// Cow_Meat.h
#ifndef COW_MEAT_H
#define COW_MEAT_H

#include "Cow.h"

class CowMeat : public Cow {
    public:
        CowMeat(const std::string& Nom, int age, int Poid);
        int boucher(int totalViande);
        void afficher();

    private:
        int Poid;
    // Ajoutez des attributs spécifiques aux vaches à viande si nécessaire
};

#include "Cow_Meat.cpp"
#endif // COW_MEAT_H
