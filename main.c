#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "linalg.h"

int main(int argc, char **argv)
{	
	double **M, **N, **T;
	double *raizes, *x1, *x0;
	double det;
	int dim, trocas;
	
	M=leraum(argv[1], &dim);
	N=leraum(argv[2], &dim);
	
	imprimeaum(M, dim);
	imprimeaum(N, dim);
	
	pivoteamento(M, dim, &trocas);
	
	raizes = malloc(dim*sizeof(double));
	
	subsreversa(M, raizes, dim);
	
	T=multiplicacao(M, N, dim);
	
	det=determinante(M, trocas, dim);
	
	T=inversa(M, dim, raizes);
	jacobi(M, x0, x1, dim);
	
	return 0;
}
	
	

