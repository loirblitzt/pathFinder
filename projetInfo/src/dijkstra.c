//dijkstra//
#include "graph.h"
#include "L_ARC.h"
#include "liste.h"
#define infini 2174483647
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


Liste dijSolver ( T_SOMMET* G,int indDepart ,int indArrivee,int X){
	int *pcc=calloc(X,sizeof(*pcc));
	int *pere=calloc(X,sizeof(*pcc));
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
		S=ajout_teteL(j,S);
		L_ARC p=G+i->voisins;
		while(p!=NULL){
			if(pcc[p->val->arrivee]>pcc[ind]+p->val->cout){
				pcc[p->val->arrivee]=pcc[ind]+p->val->cout;
				pere[p->val->arrivee]=ind;
				}
			p=p->suiv;}
	}while(appartenir(a,S)==0 && pcc[ind]!=infini)
	return S;
}

Liste dijSolverTas ( T_SOMMET* G,int indDepart ,int indArrivee,int X){
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
}
			
			
	    
		
		
		
