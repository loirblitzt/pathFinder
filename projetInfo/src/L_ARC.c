// fonction sur L_ARC//
#include <stdlib.h>
#include <stdio.h>	
#include "L_ARC.h"
#include "liste.h"

L_ARC creerarc(void){
	return NULL;}

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
	while(p!=NULL){
		printf("--arrivee %d\n",((p->val).arrivee));
		printf("--cout %lf\n",((p->val).cout));
		p=p->suiv;
	}
}

//fonction d'appartenance dans liste à faire//
