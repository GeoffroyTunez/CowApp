#include <iostream>
#include <ctime>
#include "fonctions.h"
using namespace std;



// compiler le programme en tapent : g++ -o main main.cpp fonctions.cpp
// lancer le programme en tapant : ./main 


int main() {
    srand(time(NULL)); // Initialisation du générateur de nombres aléatoires
    int choixUtilisateur;
    int choixOrdinateur;
    // char nomUtilisateur;
    
    // Demander à l'utilisateur de choisir entre
    // cout << "Quelle est votre pseaudo ? : ";
    // cin >> nomUtilisateur;

    cout << "Choisissez : pierre (1), papier (2) ou ciseaux (3) : ";
    cin>> choixUtilisateur;

    // Appeler la fonction pour générer le choix de l'ordinateur
    choixOrdinateur = genererChoixOrdinateur();
    cout << "l'ordinateur a choisi : " <<  choixOrdinateur << endl; 

    // Appeler la fonction pour déterminer le gagnant
    int resultat = determinerGagnant(choixUtilisateur, choixOrdinateur);
    afficherResultat(resultat);

    return 0;
}
