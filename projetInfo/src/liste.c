#include "carte.h"
#include "liste.h"
#include <stdio.h>

// gg vincent tu as reussi a le faire marcher a la derniere minute
Liste creer_liste(){
	return NULL;
	}

int liste_vide( Liste l){
	return !l;
	}

void visualiser_liste(Liste l ){
	Liste p = l;
	if (p==NULL) {printf("la liste est vide ");}
	while (p!=NULL){
		affiche(&(p->val));
		p = p-> suiv;
		}
	}

Liste ajout_tete (int e , Liste l) {
	Liste p = calloc(1,sizeof(*p));
	if (p==NULL){return NULL;}
	p -> val = e;
	p-> suiv = l;
	l=p;
	return p;
	}
	
Liste supprimer_tete (Liste l){
	if(!liste_vide(l)){
		Liste p = l-> suiv;
		free(l);
		return p;
		}
	else
		{
		return NULL;
		}
	}

void liberer (Liste l){
	Liste p = supprimer_tete(l);
	if (!liste_vide(p)){
		liberer(p);
		}
	}

Liste ajout_queue (int c , Liste l){
	Liste p = l;
	if (l == NULL){
		return ajout_tete(c,l);
		}
	while(!liste_vide(p-> suiv)) {
		p= p-> suiv;
		}
	Liste ne = calloc(1, sizeof(*p)); 
	ne->val = c;
	ne->suiv = NULL;
	p-> suiv = ne;
	return l;
	}

Liste concat(Liste l1, Liste l2){
	Liste l = l1;
	if (l == NULL) return l2;
	
	while(l->suiv != NULL){
		l = l->suiv;
		}
	l-> suiv = l2;
	return l1;
	}

Liste copie (Liste l){
	Liste l1 =creer_liste();
	Liste l2 =l1;
	Liste i = l; //pointeur de parcours
	while (i!=NULL){
		ajout_queue(i->val, l2);
		l2 = l2->suiv;
		i = i->suiv;
		}
	return l1;
	}
supprimerelt(int j, Liste l){
	if(!liste_vide(l)){
		if(l->val==j){
			supprimer_tete(l);
			}	
		else{Liste p=l;
			while((l->suiv->val)!=j){
				p=p->suiv;
				}
			p->suiv=p->suiv->suiv
			free(p);
			return l;
			}
		}
	else
		{
		return NULL;
		}
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
