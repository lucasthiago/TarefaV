#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double determinante(double **M, int trocas, int dim)
{
	int i;
	double det;
	
	while(i<dim)
	{
		det=M[i][i]*det;
		i++;
	}
	
	return(det * pow((-1), trocas));
}
