#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void jacobi(double **M, double *x0, double *x1, int dim, double err)
{
	double mod, modk;
	int i, j;
	do
	{
		mod=0;
		modk=0;
		for(i=0; i<dim; i++)
		{
			x1[i]=0;
			
			for(j=0; j<dim; j++)
			{
				if(j!=i)
					x1[i]+=(-1)*(M[i][j] * x0[j]);
			}
			
			x1[i]+=M[i][dim];
			x1[i]/=M[i][i];
			
			mod+=pow((x1[i]-x0[i]), 2);
			modk+=pow(x1[i], 2);
		}
		
		for(i=0; i<dim; i++)
			printf("%g\n", x1[i]);
		
		puts("\n\n");
		
		memcpy(x0, x1, 4*sizeof(double));
		
	}while((sqrt(mod)/sqrt(modk))>err);
}
