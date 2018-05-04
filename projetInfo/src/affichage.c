//affichage graph//
//X=nombre de sommet//
#include "graph.h"
#include "L_ARC.h"


void afficheGraph ( T_SOMMET* G,int X){
	int i;
	for(i=0;i<X,i++){
		printf("Le nom du sommet %d est %c\n",i,*(G[i]->nom));
		printf("Sa longitude est %d\n",*(G[i]->x));
		printf("Sa latitude est %d\n",*(G[i]->y));
		visualiserarc(G[i]->voisins);
		}
}
