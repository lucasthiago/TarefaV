#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void triangsup(double **M, int dim) {
	int i, r, j, k;
	double lamb;
	i=j=0;
		
	
	for(j=0; j<dim; j++){
		for(i=j; i<dim-1; i++) 
		{
			lamb=M[i+1][j]/M[j][j];
			for(k=j; k<dim+1; k++)
			{
				M[i+1][k] = M[i+1][k] - (lamb)*M[j][k];
			}
		}
	}
}


double** inversa(double **M, int dim, double *raizes)
{
	int i, r, j, cont, k=0;
	double lamb, **L, I[dim][dim], **N;
	i=j=0;
	
	L = malloc( dim*sizeof(double *));
	for( i = 0 ; i < dim ; i++ )
		L[i] = (double *) malloc((dim+1)*sizeof(double));
		
	N = malloc( dim*sizeof(double *));
	for( i = 0 ; i < dim ; i++ )
		N[i] = (double *) malloc((dim)*sizeof(double));
		
	cont=dim;
	
	for(i=0; i<dim; i++)
	{
			for(j=0; j<dim; j++)
				L[i][j]=M[i][j];
	}
	
	for(i=0; i<dim; i++)
	{
		for(j=0; j<dim; j++)
			if(i==j)
				I[i][j]=1;
			else
				I[i][j]=0;
	}
	
	while(cont<2*dim)
	{
		for(i=0; i<dim; i++)
			L[i][dim]=I[i][k];
		
		triangsup(L, dim);
		subsreversa(L, raizes, dim);
		
		for(i=0; i<dim; i++)
			N[i][k]=raizes[i];
		
		cont++;
		k++;
	}
}

