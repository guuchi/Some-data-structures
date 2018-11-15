#include <bits/stdc++.h>
using namespace std;
const int MAX_OBJETS = 100*1000; // here the maximal size of your cumulative table
int value[MAX_OBJETS], cumul[MAX_OBJETS+1];

int nbObjets; // Size of your cumulative table

void lireEntree()
{
    cin >> nbObjets;
    for (int idValeur = 0; idValeur < nbObjets; idValeur ++ ) 
        cin >> value[idValeur];
    cumul[0] = 0;
    for (int idValeur = 1; idValeur <= nbObjets; idValeur ++ ) 
        cumul[idValeur] = cumul[idValeur-1] + value[idValeur-1];
}

int somme(int debut, int fin)
{
    return cumul[fin]-cumul[debut];
}
