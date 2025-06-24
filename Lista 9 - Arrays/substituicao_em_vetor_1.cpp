#include <cstdio>

#define MAX_TAM 10

void le_vetor(int *v, int tam){
	for(int i = 0; i < MAX_TAM; i++)
		scanf("%d", &v[i]);
}


void imprime_vetor(int *v, int tam){
	for(int i = 0; i < MAX_TAM; i++)
		printf("X[%d] = %d\n", i, v[i]);
}

void substituicao_On(int *v, int tam){
	for(int i = 0; i < tam; i++){
		if(v[i] <= 0)
			v[i] = 1;
	}
}

int main(){
	int x[MAX_TAM];
	
	le_vetor(x, MAX_TAM);
	substituicao_On(x, MAX_TAM);
	imprime_vetor(x, MAX_TAM);

	return 0;
}
