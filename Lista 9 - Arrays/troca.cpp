#include <cstdio>

#define MAX_TAM 20

void le_vetor(int *v, int tam){
	for(int i = 0; i < tam; i++)
		scanf("%d", &v[i]);
}


void imprime_vetor(int *v, int tam){
	for(int i = 0; i < tam; i++)
		printf("N[%d] = %d\n", i, v[i]);
}

void trocaa_posicao(int *v, int tam){
	int j = tam-1;
	for(int i = 0; i < tam/2; i++){
		int aux;

		aux = v[i];
		v[i] = v[j];
		v[j] = aux;

		j--;
	}
}

int main(){
	int n[MAX_TAM];

	le_vetor(n, MAX_TAM);
	trocaa_posicao(n, MAX_TAM);
	imprime_vetor(n, MAX_TAM);

	return 0;
}
