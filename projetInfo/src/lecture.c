//lecture de CSV//
#include "graph.h"
#include "L_ARC.h"
#include <stdio.h>
#include <string.h>
int lecture_taille(char* nomfichier){
	FILE* f;
	f=fopen(nomfichier, "r");
	if (f==NULL){
		printf("ERREUR");
		return  NULL;
	}
	int X;
	fscanf(f,"%d",&X);
	return X ;
	}






T_SOMMET *readCSV (char * nomfichier){
	FILE* f;
	f=fopen(nomfichier, "r");
	if (f==NULL){
		printf("ERREUR");
		return  NULL;
	}
	int X,Y;
	fscanf(f,"%d",&X);
	fscanf(f,"%d",&Y);
	char mot[512] ;
	fgets(mot,511,f);
	fgets(mot,511,f);//enlève la ligne maggle
	T_SOMMET * Graph;
	Graph=(T_SOMMET*)calloc(X,sizeof(*Graph));
	if(Graph==NULL){printf("ERREUR");return NULL ;}
	int i;
	int numero ;
	double lat,longi ;
	char line[128] ;
	T_SOMMET SOMMET;
	for(i=0;i<X;i++){
		fscanf(f,"%d %lf %lf %s", &(numero), &(lat), &(longi), line);
		fgets(mot,511,f);
		SOMMET.x=lat;
		SOMMET.y=longi;
		strcpy(SOMMET.nom,line);//penser au copy string
		SOMMET.voisins=creerarc();
		Graph[numero]=SOMMET;
		}
	// au dessus creation du tableau de sommet, en dessous lecture des voisins//
	int depart;
	int arrive;
	double cout;
	T_ARC ARC;
	fgets(mot,511,f);
	for(i=0;i<Y;i++){
		fscanf(f,"%d %d %lf", &depart, &arrive, &cout );
		ARC.arrivee=arrive;
		ARC.cout=cout;
		ajout_tete((Graph+depart)->voisins,ARC);
		}
	fclose(f);
	return(Graph);
	}






















