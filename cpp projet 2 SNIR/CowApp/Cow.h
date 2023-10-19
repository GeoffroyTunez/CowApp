// classe_mère.h
// Cow.h
#ifndef COW_H
#define COW_H

#include <string>

class Cow {
public:
    Cow(const std::string& Nom, int age, int Etat=1); // Etat = 1 = en vie /////// Etat = 0 = mort
    void nourrir();
    void afficher();

protected:  // Changement de private à protected
    std::string Nom;
    int Etat;
    int age;
    // d'autres attributs communs
};

#include "Cow.cpp"
#endif // COW_H
