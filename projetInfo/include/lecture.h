//parseCSV.h traduit le fichier .csv en structure C
#ifndef _csv
#define _csv

#include "graph.h"
#include <string.h>

T_SOMMET *readCSV (char * nomfichier);
/* descrip :
*/
int lecture_taille(char* nomfichier); //enregsitre taille//
#endif
