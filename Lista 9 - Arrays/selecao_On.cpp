#include <cstdio>

#define MAX_TAM 10

void le_vetor(double *v, int tam){
	for(int i = 0; i < tam; i++)
		scanf("%lf", &v[i]);
}


void seleciona_impressao(double *v, int tam){
	for(int i = 0; i < tam; i++){
		if(v[i] <= 10.0)
			printf("A[%d] = %.1f\n", i, v[i]);
	}
}

int main(){
	double a[MAX_TAM];

	le_vetor(a, MAX_TAM);
	seleciona_impressao(a, MAX_TAM);

	return 0;
}
