#include <bits/stdc++.h>
using namespace std;

const int MAX_LIGNES = 100, MAX_COLONNES = 100; // maximal size of your cumulative table
int somme[MAX_LIGNES+1][MAX_COLONNES+1], valeur[MAX_LIGNES][MAX_COLONNES];

int nbLignes, nbColonnes;

void lireEntree()
{
    cin >> nbLignes >> nbColonnes;
    for (int i=0;i<nbLignes;i++)
        for (int j=0;j<nbColonnes;j++)
            cin >> valeur[i][j];
    
    for (int lig = 0; lig < nbLignes; lig ++ ) 
    {
        int sum = 0;
        for (int col = 0; col <nbColonnes;col++)
        {
            sum += valeur[lig][col];
            somme[lig + 1][col + 1] = somme[lig][col + 1] + sum;
        }
    }
}

int sum(int bordGauche, int bordDroit, int bordHaut, int bordBas ) 
{
    return somme[bordHaut][bordDroit] - somme[bordHaut][bordGauche] - somme[bordBas][bordDroit] + somme[bordBas][bordGauche];
}
