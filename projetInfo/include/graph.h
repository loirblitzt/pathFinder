//data struct :: graph.h
#ifndef _MYGRAPH
#define _MYGRAPH

//TODO : implementer les fonctions de liste etc...
	//représentation sommet
typedef struct { int arrivee; double cout } T_ARC; 			//representation arc
typedef struct lsucc { T_ARC val; struct lsucc* suiv; }*L_ARC; 	//liste d'edge
typedef struct { char* nom ; double x,y; L_ARC voisins; } T_SOMMET; 


#endif
