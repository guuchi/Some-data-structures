#include <bits/stdc++.h>
using namespace std;

const int NB_CASES_BUFFER = 100*1000, MASQUE = NB_CASES_BUFFER-1; //here is the maximal size of your queue
int file[NB_CASES_BUFFER]; // circular buffer

int debut = 0, fin = 0;
int& value(int index)
{
   return file[index & MASQUE];
}
void Push(int objet)
{
   value(fin & MASQUE) = objet;
   fin++;
}
int Pop()
{
   debut++;
   return value(debut - 1);
}
int Top()
{
   return value(debut);
}
int Size()
{
   return debut - fin;
}

int main()
{
    return 0;
}
