//unit test lecture//
#include "graph.h"
#include "L_ARC.h"
#include "liste.h"


void main(){
T_SOMMET* T;
T=readCSV("ressources/graphe1.txt");
int X=lecture_taille("ressources/graphe.txt");
afficheGraph(T,X);
}

