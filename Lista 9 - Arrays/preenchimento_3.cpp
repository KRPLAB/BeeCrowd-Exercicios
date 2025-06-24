#include <cstdio>

#define MAX_TAM 100

void preenche_vetor(double *v, int tam){
	for(int i = 1; i < tam; i++)
		v[i] = v[i-1]/2.0000;
}


void imprime_vetor(double *v, int tam){
	for(int i = 0; i < tam; i++)
		printf("N[%d] = %.4f\n", i, v[i]);
}

int main(){
	double n[MAX_TAM];
	double x;

	scanf("%lf", &x);
    n[0] = x;

	preenche_vetor(n, MAX_TAM);
	imprime_vetor(n, MAX_TAM);

	return 0;
}
