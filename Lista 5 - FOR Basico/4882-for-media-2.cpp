#include <cstdio>

int main(){
	int n, valor, count;
	double media = 0.0;
	
	scanf("%d", &n);
	count = n;
	for(int i = 0; i < n; i++){
		scanf("%d", &valor);
		if(valor > 0){
			media += valor;
		} else {
			count--;
		}
	}
	media /= count;

	printf("A média foi %.1f\n", media);

	return 0;
}
