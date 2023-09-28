#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include "fonctions.h"
using namespace std;

// compiler le programme en tapant : g++ -o main main.cpp fonctions.cpp
// lancer le programme en tapant : ./main 

int main() {
    srand(time(NULL)); // Initialisation du générateur de nombres aléatoires
    int choixUtilisateur;
    int choixOrdinateur;
    string nomUtilisateur;
    int score = 0;
    int nbrparti = 0;
    
    cout << "Quelle est votre prenom ? : ";
    cin >> nomUtilisateur;

    cout << "Combien de parties voulez-vous jouer ? : ";
    cin >> nbrparti;

    cout << "Vous voulez faire : " << nbrparti << " tours" << endl;  

    for (int i = 0; i < nbrparti; i++) {
        // Demander à l'utilisateur de choisir entre
        cout << "Choisissez : pierre (1), papier (2) ou ciseaux (3) : ";
        cin >> choixUtilisateur;

        // Appeler la fonction pour générer le choix de l'ordinateur
        choixOrdinateur = genererChoixOrdinateur();
        cout << "L'ordinateur a choisi : " << choixOrdinateur << endl; 

        // Appeler la fonction pour déterminer le gagnant
        int resultat = determinerGagnant(choixUtilisateur, choixOrdinateur);
        score = afficherResultat(score, resultat);
    }
    cout << "Votre score est : " << score << endl;

    // Obtenir la date actuelle
    time_t now = time(0);
    tm* localTime = localtime(&now);
    char dateStr[80];
    strftime(dateStr, sizeof(dateStr), "%Y-%m-%d", localTime);

    // Créer le nom de fichier avec la date d'aujourd'hui
    string nomFichier = "C:/Users/Geoffroy/Desktop/git geo/CPP projet SNIR/" + string(dateStr) + "_file.txt";

    ofstream monflux(nomFichier.c_str()); 
    if (monflux) {
       monflux << "Nom de l'utilisateur : " << nomUtilisateur << endl << "Score de l'utilisateur : " << score << endl;
    }
    return 0;
    
}
