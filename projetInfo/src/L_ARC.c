// fonction sur L_ARC//
#include "graph.h"
L_ARC creerarc(void){
	return(NULL);}

L_ARC ajout_tete(L_ARC L,T_ARC T){
	L_ARC p = (L_ARC)calloc(1,sizeof(*p));
	if(p==NULL){
		return NULL;
	}
	p->val=T;
	p->suiv=L;
	return p;
}

void visualiserarc(L_ARC L){
	if(L == NULL) {
		printf("liste vide\n");
		return ;
	}
	
	L_ARC p=L;
	while(!liste_vide(p)){
		printf("%d\n",(p->T_ARC->arrivee));
		printf("%lf\n",*(p->T_ARC->cout));
		p=p->suiv;
	}
}

//fonction d'appartenance dans liste à faire//
