#include "graph.h"
#include "L_ARC.h"
#include <stdio.h>
void swap(T_ARC a,T_ARC b){
	T_ARC c;
	c=a;
	a=b;
	b=c;
	}

void augmentetas(T_ARC* tas,int i){
	if(i==0){
		return ;
		}
	else{
		while(tas+i.cout>tas+((i-1)/2).cout){
			
			swap(tas+i,tas+(i-1)/2);
			i=(i-1)/2 ;
			printf("ok");
			}
		}
	}

void constructiontas(T_ARC* tas, int n){
	int i=1;
	while(i<n){
		augmentetas(tas,i);
		i++;
		}
	}

void descendretas(T_ARC* tas, int i){
	int p=0;
	while( p<i && (tas+p).cout<(tas+(p*2+1)).cout || (tas+p).cout<(tas+(2*p+2)).cout){
			if(tas+(p*2+1)).cout>(tas+p).cout){
				swap(tas+p,tas+2*p+1);
				p=2*p+1;
				}
			else{
				swap(tas+p,tas+2*p+2);
				p=2*p+2;
				}
			}	
		}
	


void suppressiontas(T_ARC* tas,int i){
	swap(tas+i-1,tas);
	descendretas(tas,i-1);
	}

void tri(double* tas, int n){
	constructiontas(tas,n);
	int k=0;
	while(k<n){
		suppressiontas(tas,n-k);
		k++;
		}
	}
/*int main(){
	double tab[10]={1,5,4,3,8,9,7,6,2,0};
	tri(tab,10);
	printf("ok");
	int i=0;
	for(i=0;i<10;i++){
		printf("%lf\n",*(tab+i));}
	}*/
	
	

