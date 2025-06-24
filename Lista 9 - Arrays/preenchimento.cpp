#include <cstdio>

#define MAX_TAM 10

void preenche_vetor(int *v, int tam){
	for(int i = 1; i < tam; i++)
		v[i] = v[i-1]*2;
}


void imprime_vetor(int *v, int tam){
	for(int i = 0; i < tam; i++)
		printf("N[%d] = %d\n", i, v[i]);
}

int main(){
	int valor;
	int n[MAX_TAM];

	scanf("%d", &valor);

	if(valor > 50){
		while(true){
			scanf("%d", &valor);
			if(valor <= 50)
				break;		
		}
	}

	n[0] = valor;
	
	preenche_vetor(n, MAX_TAM);
	imprime_vetor(n, MAX_TAM);


	return 0;
}
