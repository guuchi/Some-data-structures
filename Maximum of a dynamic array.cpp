#include <bits/stdc++.h>
using namespace std;

const int PROFONDEUR = 17,premier= 1 << PROFONDEUR;

int maximal[premier*2];

void update(int node, int value ) 
{
   maximal[node] = value;
   for (int noeudCourant = node/2; noeudCourant > 0; noeudCourant /= 2) 
      maximal[noeudCourant] = max(maximal[noeudCourant*2], maximal[noeudCourant*2+1]);
}

int main()
{
   int nbQuestions, hauteurArbre;
   cin >> hauteurArbre >> nbQuestions;
   
   for (int idRequete = 0; idRequete < nbQuestions; idRequete++)
   {
      int idModif, valeurModif;
      cin >> idModif >> valeurModif;
      update(idModif+premier, valeurModif);
      cout << maximal[1] << endl;
   }
}
