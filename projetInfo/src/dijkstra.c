//dijkstra//
#include "graph.h"
#include "L_ARC.h"
#include "liste.h"
#include <stdio.h>
#define infini 2147483647
int min(int* tab,int dim,Liste control){
	int i;
	int min=infini;
	int indmin;
	for(i=0;i<dim;i++){
		if((appartenir(i,control)!=0)){
			if(tab[i]<min){
				min=tab[i]; 
				indmin=i;
			}
		}
	}
	//printf("%d %d\n",min ,indmin );//pour debug le parcourt logique de l'algo
	if(min == infini){
		return -1; //erreur il n'y a pas de chemin
	}
	return indmin;
}

Liste dijSolver ( T_SOMMET* G, int indDepart, int indArrivee,int X){
	int* pere = calloc(X,sizeof(*pere));
	int* pcc = calloc(X, sizeof(*pcc));
	Liste C = creer_liste(); //non visités
	//gestion des erreurs allocation
	if (pere== NULL || pcc == NULL ) {printf("erreur allocation pere ou pcc");return NULL;}
	//initialisation des variables de l'algo
	int i;
	for(i = 0; i<X;i++){
		pere[i] =-1;
		pcc[i] = infini;
		C = ajout_teteL(X-i-1,C); //a modifier par un tas
	}
	pcc[indDepart] = 0;
	if (C==NULL){printf("erreur dallocation C");return NULL;}

	//boucle d'iteration
	int currIndice;
	do{
		currIndice = min(pcc,X,C); //le sommet dont le cout est minimal appartenant à ceux qui ne sont pas visités est selectionné
		if(currIndice == -1){
			printf("aucun chemin disponible \n");
			return NULL;
			} //gestion de l'erreur :: pas de chemin disponible 
		C = supprimerelt(currIndice, C); //mise a jour des voisins visités
		
		L_ARC p = (G+currIndice)->voisins;
		while(p!=NULL){//parcourt des voisins
			if( (pcc[p->val.arrivee] > pcc[currIndice] + p->val.cout)){ //si le cout est meilleur alors on le change !! attention overflow!!
				pcc[p->val.arrivee]=pcc[currIndice]+p->val.cout;
				pere[p->val.arrivee]=currIndice;
				}
			p=p->suiv;
		}
	}while(appartenir(indArrivee,C)==1 && pcc[currIndice]!=infini);

	//liberation mémoire 
	liberer(C);
	free(pcc);
	//lecture du chemin suivi dans pere
	Liste chemin = creer_liste();
	i = indArrivee;
	chemin = ajout_teteL(i,chemin);
	while(i!=indDepart){
		i = pere[i];
		chemin = ajout_teteL(i,chemin);
	}
	free(pere);
	return chemin;
}


/*Liste dijSolverTas ( T_SOMMET* G,int indDepart ,int indArrivee,int X){
	T_ARC *pcc=calloc(X,sizeof(*pcc));
	int *pere=calloc(X,sizeof(*pcc));
	Liste S=creer_liste();
	Liste C=creer_liste();
	int i;
	int ind;
	
	for(i=0;i<X;i++){
		ajout_queue(i,C); //C contient les numeros de sommet non parcourus//
		if(i==indDepart){
			(pcc+i).cout=1;
			}
		else{
			(pcc+i).cout=infini;}
		(pcc+i).arrivee=i;
		pere[i]=-1;
	}
	
	constructiontas(pcc,X);
	do{ ind=pcc[X-1];
		C=supprimerelt(j,C);
		S=ajout_teteL(j,S);
		L_ARC p=G+i->voisins;
		while(p!=NULL){
			if(
				}
			p=p->suiv;}
	}while(appartenir(a,S)==0 && pcc[ind]!=infini)
	return S;
}*/
			
			
	    
		
		
		
