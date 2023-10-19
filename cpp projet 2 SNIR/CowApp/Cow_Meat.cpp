// classe_fille2.cpp
// Cow_Meat.cpp
#include "Cow_Meat.h"
#include <iostream>

using namespace std;

CowMeat::CowMeat(const std::string& Nom, int age, int Poid) : Cow(Nom, age), Poid(Poid) {
    // initialisation des attributs spécifiques aux vaches à viande si nécessaire
}

int CowMeat::boucher(int totalViande) {
    cout << Nom << " a été abattue pour la viande." << endl;
    totalViande += (age * 3 ) * (Poid / 2);
    Cow::Etat = 0;
    return totalViande;
    // logique spécifique à l'abattage des vaches à viande
}

void CowMeat::afficher() {
    Cow::afficher(); // Appelle la fonction displayInfo de la classe mère
    cout << "Poids de la vache : " << Poid << "kg" << endl;
    // affiche des informations spécifiques aux vaches à viande
}