#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void subsreversa (double **M, double *raizes, int dim, int *cont)
{
	int i, j, pos=0, e=0;
	double soma=0;
	
	
	for(i=dim-1; i>=0; i--)
	{
		raizes[i] = M[i][dim];
		
		for(j=dim; j>=i+1; j--)
			raizes[i]-=M[i][j]*raizes[j];
			
		raizes[i]/=M[i][i];
	}
}

