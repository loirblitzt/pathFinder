#ifndef _Liste
#define _Liste

#include "carte.h" //TODO !! creer propre CARTE pour les besoins du fichier

struct cellule{CARTE val; struct cellule* suiv;};
typedef struct cellule Maillon;
typedef Maillon* Liste;


Liste creer_liste();

int liste_vide( Liste l);

void visualiser_liste(Liste l );

Liste ajout_tete (CARTE e , Liste l) ;

Liste supprimer_tete (Liste l);

void liberer (Liste l);

Liste ajout_queue (CARTE c , Liste l);

Liste concat(Liste l1, Liste l2);

Liste copie (Liste l);
#endif
