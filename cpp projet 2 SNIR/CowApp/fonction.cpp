//fonction.cpp
#include "Cow_Milk.h"
#include "Cow_Meat.h"
#include <iostream>

using namespace std;

void clearScreen()
{
    for (int i = 0; i < 15; i++)
    {
        cout << endl;
    }
}

int TraireCows(CowMilk milkCows[])
{
    int totalLait = 0;
    for (int i = 0; i < 4; i++)
    {
        totalLait = milkCows[i].traite(totalLait);
    }

    return totalLait;
}

int Abatoir(CowMeat meatCows[])
{
    int totalViande = 0;
    for (int i = 0; i < 4; i++)
    {
        totalViande = meatCows[i].boucher(totalViande);
    }

    return totalViande;
}

void AfficherCowsMilk(CowMilk milkCows[])
{
    for (int i = 0; i < 4; i++)
    {
        milkCows[i].afficher();
    }
}

void AfficherCowsMeat(CowMeat meatCows[])
{
    for (int i = 0; i < 4; i++)
    {
        meatCows[i].afficher();
    }
}


void Fin(int totalLait, int totalViande)
{
    int totalArgent=0;
    cout << "Il est 18h..." << endl;
    cout << "Vous avez fini votre journée ! " << endl;
    cout << endl;
    cout << endl;
    cout << "Lait produit : " << totalLait << endl;
    cout << "Vinade produit : " << totalViande << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Vous vendez le lait pour 1e/l et la viande a 10e/kg" << endl;
    
    totalArgent = (totalLait*1) + (totalViande*10);
    cout << "Vous gagner donc : " << totalArgent << "euro ! "<< endl;

    if (totalArgent > 100){
        cout << "Bravo vous avez réussi votre journée !! " << endl;
    }else if(totalArgent = 0){
        cout << "Dommage vous n'avez pas fais de bénéfisse aujourd'hui ! " << endl;
    }else{
        cout << "La journée a pas été trop mauvaise mais vous auriez pu faire mieux :/ " << endl;
    }
}