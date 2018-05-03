#include <stdio.h>
#include <stdlib.h>

double** leraum(const char *nomeArq, int *d)
{
	int i, j, dim;
	double **L, a;
	FILE *arq;
    
    arq = fopen(nomeArq, "r");
	i = fscanf(arq,"%d",&dim);
	L = malloc( dim*sizeof(double *));
	for( i = 0 ; i < dim ; i++ )
		L[i] = (double *) malloc((2*dim)*sizeof(double));
	
	i=j=0;
	while (fscanf(arq,"%lf",&a) != EOF) {
		L[i][j] = a;
		j++;
		if (j == 2*dim) {
			j = 0;
			i++;
		}
	}
	*d=dim;
	return L;
}
