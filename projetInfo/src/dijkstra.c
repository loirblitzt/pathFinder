//dijkstra//
#include "graph.h"
#include "L_ARC.h"
#include "liste.h"
int min(int* tab,int dim){
	int i;
	int min=0;
	int indmin
	for(i=0;i<dim;i++){
		if(tab[i]<min){
			min=tab[i];
			indmin=i
			
		}
	}
	return indmin;
}


L_ARC dijSolver ( T_SOMMET* G,int indDepart ,int indArrivee,int X){
	int *pcc=calloc(X,sizeof(*pcc));
	int *pere;
	Liste S=creer_liste();
	Liste C=creer_liste();
	int i;
	int ind;
	
	for(i=0;i<X;i++){
		ajout_queue(i,C); //C contient les numeros de sommet non parcourus//
		pcc[i]=infini;// mettre un tres grand nombre//
		pere[i]=-1;
	}
	pcc[indDepart]=0;
	do{ ind=min(pcc,X);
		C=supprimerelt(j,C);
		S=ajout_tete(j,S);
		L_ARC p=G[i]->voisins;
		while(p->suiv!=NULL){
			
		
			
	    
		
		
		
