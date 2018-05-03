#ifndef linalg_h__
#define linalg_h__

extern double** ler(const char *nomeArq, int *d);
extern void imprime(double **N, int var);
extern void subsreversa (double **M, double *raizes, int dim);
extern void pivoteamento(double **M, int dim, int *trocas);
extern double ** multpilicacao(double **M, double **N, int dim);
extern double determinante(double **M, int trocas, int dim);
extern double** inversa(double **M, int dim, double *raizes);
extern void jacobi(double **M, double *x0, double *x1, int dim);

#endif
