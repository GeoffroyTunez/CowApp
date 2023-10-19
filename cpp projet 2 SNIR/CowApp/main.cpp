// main.cpp
#include "Cow_Milk.h"
#include "Cow_Meat.h"
#include "fonction.cpp"
#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int choixUtilisateur;
    bool bonchoix = false;
    int totalLait = 0;
    int totalViande = 0;
    clearScreen();

    cout << "Bonjour et bienvenue dans votre ferme ! " << endl;
    cout << "Aujourd'hui vous allez devoir gérer le développement de votre ferme. " << endl;
    cout << endl;
    cout << endl;
    cout << "Attention à ne pas faire faillite." << endl;
    cout << endl;

    cout << "Appuyez sur une touche pour continuer..." << endl;
    getchar(); // Attendre que l'utilisateur appuie sur une touche

    cout << "Mais d'abord voila vos vaches : " << endl;

    
    clearScreen();
    cout << "Les laitières : " << endl;

    // Création des vaches laitières
                    //nom , age , production lait
    CowMilk milkCow1("Molly", 4, 10);
    CowMilk milkCow2("Daisy", 2, 6);
    CowMilk milkCow3("Bella", 1, 3);
    CowMilk milkCow4("Rosie", 6, 7);

    // Utilisation d'un tableau pour faciliter la gestion des vaches laitières
    CowMilk milkCows[] = {milkCow1, milkCow2, milkCow3, milkCow4};
    AfficherCowsMilk(milkCows);

    cout << "Appuyez sur une touche pour continuer..." << endl;
    getchar(); 
    clearScreen();
    
    cout << "Les bovines : " << endl;

    // Création des vaches à viande
                    //nom , age , poid
    CowMeat meatCow1("Beefy", 3, 218);
    CowMeat meatCow2("Chunky", 2, 90);
    CowMeat meatCow3("Sirloin", 4, 160);
    CowMeat meatCow4("Prime", 6, 120);

    // Utilisation d'un tableau pour faciliter la gestion des vaches à viande
    CowMeat meatCows[] = {meatCow1, meatCow2, meatCow3, meatCow4};
    AfficherCowsMeat(meatCows); 
    cout << "Appuyez sur une touche pour continuer..." << endl;
    getchar(); // Attendre que l'utilisateur appuie sur une touche


    while (bonchoix == false)
    {
        clearScreen();
        cout << "Il est 8h..." << endl;
        cout << endl;
        cout << endl;
        cout << "Que voulez-vous faire maintenant ? " << endl;
        cout << "1 : Traire les vaches a lait." << endl;
        cout << "2 : S'occuper des bovines." << endl;
        cout << "3 : Ne rien faire pour le moment..." << endl;

        cin >> choixUtilisateur;

        if( choixUtilisateur == 1)
        {
            bonchoix = false;
            while (bonchoix == false)
            {
            AfficherCowsMilk(milkCows);
            cout << "Voulez-vous traire les vaches ? " << endl;
            cout << "1 : Oui." << endl;
            cout << "2 : Non." << endl;
            cin >> choixUtilisateur;

            if(choixUtilisateur == 1 ) // Choix oui
            {
                totalLait = TraireCows(milkCows);
                cout << "Les vaches on produit " << totalLait << "L de lait ! " << endl;
                cout << "Appuyez sur une touche pour continuer..." << endl;
                getchar();
                bonchoix = true;
            }else if(choixUtilisateur == 2 ){ // Choix non
                        
                bonchoix = true;
            }else{
                cout << "choix incorect ! " << endl;
            }
            }
            bonchoix = false;
            while (bonchoix == false)
            {
                clearScreen();
                cout << "Que voulais vous faire ? " << endl;
                cout << "Il est 13h..." << endl;
                cout << endl;
                cout << endl;
                cout << "Que voulez-vous faire maintenant ? " << endl;
                cout << "1 : Voir les stats." << endl;
                cout << "2 : S'occuper des bovines." << endl;
                cout << "3 : Ne rien faire pour le moment..." << endl;

                cin >> choixUtilisateur;

                if(choixUtilisateur == 1){

                    clearScreen();
                    cout << "Les laitières : " << endl;
                        AfficherCowsMilk(milkCows);

                    cout << "Total lait produit aujourd'huis : " << totalLait << endl;

                    cout << "Appuyez sur une touche pour continuer..." << endl;
                    getchar(); 
                    getchar();

                    // clearScreen();
                    cout << "Les bovines : " << endl;
                        AfficherCowsMeat(meatCows); 
                    
                    cout << "Appuyez sur une touche pour continuer..." << endl;
                    getchar();

                }else if (choixUtilisateur == 2)
                {
                    clearScreen();
                    AfficherCowsMeat(meatCows);
                    cout << "Que voulais vous faire ? " << endl;
                    cout << "1 : Les envoier a l'abatoir. " << endl;
                    cout << "2 : Ne rien faire. " << endl;
                    cin >> choixUtilisateur;
                    if (choixUtilisateur == 1 )
                    {
                        totalViande = Abatoir(meatCows);
                        cout << "Appuyez sur une touche pour continuer..." << endl;
                        getchar(); 
                        getchar();
                        Fin(totalLait,totalViande);
                        bonchoix = true;
                    }else{
                        cout << "Appuyez sur une touche pour continuer..." << endl;
                        getchar(); 
                        getchar();
                        Fin (totalLait, totalViande);
                        bonchoix = true;
                    }

                }else if (choixUtilisateur == 3){
                        Fin ( totalLait,totalViande);
                        bonchoix = true;
                }else 
                {
                    cout << "choix incorect ! " << endl;
                }
            }
        }else if (choixUtilisateur == 2)
        {
            clearScreen();
            AfficherCowsMeat(meatCows);
            cout << "Que voulais vous faire ? " << endl;
            cout << "1 : Les envoier a l'abatoir. " << endl;
            cout << "2 : Ne rien faire. " << endl;
            cin >> choixUtilisateur;
            if (choixUtilisateur == 1 )
            {
                totalViande = Abatoir(meatCows);
                cout << "Vous avez pour " << totalViande << "kg de viande" << endl;
                cout << "Appuyez sur une touche pour continuer..." << endl;
                getchar(); 
                getchar();
                bonchoix = false;
                while(bonchoix == false){
                    cout << "Il est 13h... " << endl;
                    cout << "Que voulez-vous faire ?" << endl;
                    cout << "1 : Traire les vache a lait " << endl;
                    cout << "2 : Ne rien faire." << endl;
                    cin >> choixUtilisateur;
                    if (choixUtilisateur == 1)
                    {
                        totalLait = TraireCows(milkCows);
                        cout << "Les vaches on produit " << totalLait << "L de lait ! " << endl;
                        cout << "Appuyez sur une touche pour continuer..." << endl;
                        getchar();
                        getchar();
                        Fin (totalLait, totalViande);
                        bonchoix = true;
                    }else if(choixUtilisateur == 2){
                        cout << "Appuyez sur une touche pour continuer..." << endl;
                        getchar(); 
                        getchar();
                        Fin (totalLait, totalViande);
                        bonchoix = true;
                    }else{
                        cout << "choix incorect ! " << endl;
                    }
                }

            }else if(choixUtilisateur == 2){
                cout << "Appuyez sur une touche pour continuer..." << endl;
                getchar(); 
                getchar();
            }
        }else if (choixUtilisateur == 3){
                cout << "Appuyez sur une touche pour continuer..." << endl;
                getchar(); 
                getchar();
                cout << "Il est 13h... " << endl;
                cout << "Que voulais vour faire ? (Sachant que vous ne pouvais faire que une activité ! )" << endl;
                cout << "1 : S'occuper des bovines." << endl;
                cout << "2 : Traire les vaches." << endl;
                cout << "3 : Ne rien faire. " << endl;
                cin >> choixUtilisateur;
                
                if(choixUtilisateur == 1 )
                { 
                    totalViande = Abatoir(meatCows);
                    cout << "Vous avez pour " << totalViande << "kg de viande" << endl;
                    cout << "Appuyez sur une touche pour continuer..." << endl;
                    getchar(); 
                    getchar();
                    Fin(totalLait,totalViande);
                    bonchoix = true;
                }else if(choixUtilisateur == 2)
                {
                    totalLait = TraireCows(milkCows);
                    cout << "Les vaches on produit " << totalLait << "L de lait ! " << endl;
                    cout << "Appuyez sur une touche pour continuer..." << endl;
                    getchar(); 
                    getchar();
                    Fin(totalLait,totalViande);
                    bonchoix = true;
                }else if(choixUtilisateur == 3)
                {
                    cout << "Appuyez sur une touche pour  continuer..." << endl;
                    getchar(); 
                    getchar();
                    Fin(totalLait,totalViande);
                    bonchoix = true;
                }else
                {
                    cout << "choix incorect ! " << endl;
                }
            bonchoix = true;
        }else 
        {
            cout << "choix incorect ! " << endl;
        }

    }
    
    





    return 0;
}
