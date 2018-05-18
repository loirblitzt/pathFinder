//test de dijkstra//
#include "graph.h"
#include "L_ARC.h"
#include "liste.h"
#include <stdio.h>
#include <string.h>

void main(){
T_SOMMET* G;
G=readCSV("graphe1.txt");
int X=lecture_taille("graphe1.txt");
Liste Sol;
Sol=dijSolver(G,0,5,X);
visualiser_liste(Sol);
}

