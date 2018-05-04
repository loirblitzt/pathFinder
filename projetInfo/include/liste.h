#ifndef _Liste
#define _Liste

 //TODO !! creer propre CARTE pour les besoins du fichier

struct cellule{int val; struct cellule* suiv;};
typedef struct cellule Maillon;
typedef Maillon* Liste;


Liste creer_liste();

int liste_vide( Liste l);

void visualiser_liste(Liste l );

Liste ajout_tete (int e , Liste l) ;

Liste supprimer_tete (Liste l);

void liberer (Liste l);

Liste ajout_queue (int c , Liste l);

Liste concat(Liste l1, Liste l2);

Liste copie (Liste l);

Liste supprimerelt(int j, Liste l);

int appartenir(int a, Liste l);
#endif
