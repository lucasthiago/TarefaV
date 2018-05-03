#include <stdio.h>
#include <math.h>


void pivoteamento(double **M, int dim, int *trocas, double *raizes)
{

	double aux1, lamb;
	int i, j, k, aux2, o;
	
	*trocas = 0;
	
	puts("\nMatriz Pivoteada\n\n");
	
	for(i=0; i<dim; i++)
	{
		aux2=i;
		
		for(j=i+1; j<dim; j++)
		{
			if(fabs(M[aux2][aux2])<fabs(M[j][aux2]))
				aux2 = j;
		}
		
		
		o=i;
		
		if(aux2>i)
		{
			for(k=o; k<dim+1; k++)
			{
				aux1=M[aux2][k];
				M[aux2][k] = M[o][k];
				M[o][k] = aux1;
			}
			
			*trocas+=1;
		}
		
			
		for(j=i; j<dim-1; j++)
		{
			lamb=M[j+1][i]/M[i][i];
			for(k=i; k<dim+1; k++)
				M[j+1][k]-=(lamb) * M[i][k];
		}
		puts(" ");
	}
		
	subsreversa(M, raizes, dim);
}
