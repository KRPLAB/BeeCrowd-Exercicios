#include <cstdio>

#define MAX_TAM 1000

void preenche_vetor(int *v, int t, int tam){
	for(int i = 0; i < tam; i++)
		v[i] = i % t;

}


void imprime_vetor(int *v, int tam){
	for(int i = 0; i < tam; i++)
		printf("N[%d] = %d\n", i, v[i]);
}

int main(){
	int n[MAX_TAM];
	int t;

	scanf("%d", &t);
	preenche_vetor(n, t, MAX_TAM);
	imprime_vetor(n, MAX_TAM);

	return 0;
}
