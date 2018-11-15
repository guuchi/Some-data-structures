#include <bits/stdc++.h>
using namespace std;

const int MAX_OBJETS = 100*1000; // here is the maximal size of the stack
//Implementation of a stack 
int pile[MAX_OBJETS];
int nbObjets = 0;

void Push(int objet)
{
    pile[nbObjets] = objet;
    nbObjets ++;
}
int Pop()
{
    nbObjets--;
    return pile[nbObjets];
}
int Top()
{
    return pile[nbObjets-1];
}
int Size()
{
    return nbObjets;
}
int main()
{
    return 0;
}
