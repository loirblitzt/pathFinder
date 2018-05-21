//test de dijkstra//
#include "graph.h"
#include "L_ARC.h"
#include "liste.h"
#include <stdio.h>
#include <string.h>

void main(){
T_SOMMET* G;
//lecture des données deja testé dans ./ut_lecture
G=readCSV("ressources/graphe1.txt");
int X=lecture_taille("ressources/graphe1.txt");
//resolution du chemin
Liste Sol;
Sol=dijSolver(G,7,2,X);
visualiser_liste(Sol);
}


