// classe_fille.cpp
// Cow_Milk.cpp
#include "Cow_Milk.h"
#include <iostream>

using namespace std;

CowMilk::CowMilk(const std::string& Nom, int age, int ProductionLait) : Cow(Nom, age), ProductionLait(ProductionLait) {
    // initialisation de l'attribut spécifique aux vaches laitières
}

int CowMilk::traite(int totalLait) {
    cout << Nom << " a produit " << ProductionLait << " litres de lait." << endl;
    totalLait += ProductionLait;
    CowMilk::ProductionLait = 0;
    return totalLait;
}

void CowMilk::afficher() {
    Cow::afficher(); // Appelle la fonction displayInfo de la classe mère
    cout << "Production de lait : " << ProductionLait << " litres" << endl;
    // affiche des informations spécifiques aux vaches laitières
}
