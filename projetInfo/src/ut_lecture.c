//unit test lecture//
#include "graph.h"
#include "L_ARC.h"
#include "affichage.h"
#include "lecture.h"


void main(){
T_SOMMET* T;
T=readCSV("ressources/graphe1.txt");
int X=lecture_taille("ressources/graphe1.txt");
afficheGraph(T,X);
}

