#include <stdio.h>

void imprimeaum(double **N, int var)
{
	int i, j;
	
	for(i=0;i<var;i++) {
		for(j=0;j<2*var;j++) { 
			printf("%5.2lf\t",N[i][j]);
		}	  
		puts("");
	}
}
