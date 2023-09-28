#include <iostream>
#include <ctime>
using namespace std;

int i;

//////////////          compiler le programme en tapent : g++ -o main main.cpp fonctions.cpp
//////////////          lancer le programme en tapant : ./main 

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


int main() {
    for( i=0;i=10;i++){
        
        srand(time(NULL)); // Initialisation du générateur de nombres aléatoires
        int choixUtilisateur;
        int choixOrdinateur;
        
        // Demander à l'utilisateur de choisir entre
        cout << "Choisissez : pierre (1), papier (2) ou ciseaux (3) : ";
        cin >> choixUtilisateur;

        // Appeler la fonction pour générer le choix de l'ordinateur
        choixOrdinateur = genererChoixOrdinateur();
        cout << "l'ordinateur a choisi : " <<  choixOrdinateur << endl; 

        // Appeler la fonction pour déterminer le gagnant
        int resultat = determinerGagnant(choixUtilisateur, choixOrdinateur);
        afficherResultat(resultat);
    }
    return 0;
}
