#include <iostream>
#include <cstdlib>
#include "fonctions.h"
using namespace std;


int genererChoixOrdinateur() {
    // Génère un choix aléatoire pour l'ordinateur (1 pour pierre, 2 pour papier, 3 pour ciseaux)
    return rand() % 3 + 1;
}

int determinerGagnant(int choixUtilisateur, int choixOrdinateur) {
    // Logique pour déterminer le gagnant et renvoyer le résultat (1 pour utilisateur, -1 pour ordinateur, 0 pour égalité)
    if (choixUtilisateur == choixOrdinateur) {
        return 0; // Égalité
    } else if ((choixUtilisateur == 1 && choixOrdinateur == 3) || (choixUtilisateur == 2 && choixOrdinateur == 1) || (choixUtilisateur == 3 && choixOrdinateur == 2)) {
        return 1; // Utilisateur gagne
    } else {
        return -1; // Ordinateur gagne
    }
}

void afficherResultat(int resultat) {
    // Afficher le résultat du jeu
    if (resultat == 0) {
        cout << "Égalité !";
    } else if (resultat == 1) {
        cout << "Vous avez gagné !";
    } else {
        cout << "L'ordinateur a gagné !";
    }
}

// void saveGame(int )
