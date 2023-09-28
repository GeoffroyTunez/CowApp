#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include "fonctions.h"
using namespace std;



// compiler le programme en tapent : g++ -o main main.cpp fonctions.cpp
// lancer le programme en tapant : ./main 


int main() {
    srand(time(NULL)); // Initialisation du générateur de nombres aléatoires
    int choixUtilisateur;
    int choixOrdinateur;
    string nomUtilisateur;
    int score =0 ;
    int nbrparti = 0;
    int i = 0;
    
    cout << "Quelle est votre prenom ? : ";
    cin >> nomUtilisateur;

    cout << "Combien de parti voulez vous jouer ? : ";
    cin >> nbrparti;

    cout << " Vous voulez faire  : " << nbrparti << " tours" << endl;  


    for( i=0 ; i<nbrparti ; i++){

        // Demander à l'utilisateur de choisir entre
        cout << "Choisissez : pierre (1), papier (2) ou ciseaux (3) : ";
        cin>> choixUtilisateur;

        // Appeler la fonction pour générer le choix de l'ordinateur
        choixOrdinateur = genererChoixOrdinateur();
        cout << "l'ordinateur a choisi : " <<  choixOrdinateur << endl; 

        // Appeler la fonction pour déterminer le gagnant
        int resultat = determinerGagnant(choixUtilisateur, choixOrdinateur);
        score = afficherResultat(score, resultat);

    }
    cout << "Votre score est : " << score << endl;

    string const nomdufichier ( "C:/Users/Geoffroy/Desktop/git geo/CPP projet SNIR/file.txt" );
    ofstream monflux (nomdufichier.c_str()); 
    if( monflux) {
       monflux << "Nom de l'utilisateur : " << nomUtilisateur << endl << "Score de l'utilisateur : " << score << endl;

    }
    return 0;
}
