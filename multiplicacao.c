#include <stdio.h>
#include <stdlib.h>

double ** multiplicacao(double **M, double **N, int dim)
{
	double **L;
	int i, j;
	
	L = malloc( dim*sizeof(double *));
	for( i = 0 ; i < dim ; i++ )
		L[i] = (double *) malloc((dim)*sizeof(double));
		
	for(i=0; i<dim; i++)
	{
		for(j=0; j<dim; j++)
			L[i][j]+=M[i][j]*N[j][i];
	}
	
	return L;
}
