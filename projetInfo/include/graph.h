//data struct :: graph.h
#ifndef _MYGRAPH
#define _MYGRAPH

//TODO : implementer les fonctions de liste etc...
	//représentation sommet
	//bien sur tjr make clean si on modifie un .h
typedef struct { int arrivee; double cout; } T_ARC; 			//representation arc
typedef struct lsucc { T_ARC val; struct lsucc* suiv; }*L_ARC; 	//liste d'edge
typedef struct { char nom[512] ;char ligne[128] ;double x,y; L_ARC voisins; } T_SOMMET; 


#endif
