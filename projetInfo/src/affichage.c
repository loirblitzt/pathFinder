//affichage graph//
//X=nombre de sommet//
#include "graph.h"
#include "L_ARC.h"
#include "affichage.h"

void afficheGraph ( T_SOMMET* G,int X){
	int i;
	for(i=0;i<X;i++){
		printf("Le nom du sommet %d est %s\n",i,(G[i].nom)); // *(G[i]->nom)
		printf("Sa longitude est %lf\n",(G[i].x));
		printf("Sa latitude est %lf\n",(G[i].y));
		visualiserarc(G[i].voisins);
		}
}
