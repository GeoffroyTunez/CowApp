// classe_mère.cpp
// Cow.cpp
#include "Cow.h"
#include <iostream>

using namespace std;

Cow::Cow(const std::string& Nom, int age,int Etat) : Nom(Nom), age(age), Etat(Etat) {
    // initialisation des attributs communs
}

void Cow::nourrir() {
    cout << Nom << " est nourrie." << endl;
    // logique de nourrissage commune
}

void Cow::afficher() {
    cout << "Nom : " << Nom << ", Age : " << age << endl;
    // affichage des informations communes
}
