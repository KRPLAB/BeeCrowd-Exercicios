#include <cstdio>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int menor, meio, maior;

	// Descobre o menor
	if (a <= b && a <= c) {
		menor = a;
		if (b <= c) {
			meio = b;
			maior = c;
		} else {
			meio = c;
			maior = b;
		}
	} else if (b <= a && b <= c) {
		menor = b;
		if (a <= c) {
			meio = a;
			maior = c;
		} else {
			meio = c;
			maior = a;
		}
	} else {
		menor = c;
		if (a <= b) {
			meio = a;
			maior = b;
		} else {
			meio = b;
			maior = a;
		}
	}


	printf("%d\n%d\n%d\n", menor, meio, maior);
	printf("\n");
	printf("%d\n%d\n%d\n", a, b, c);

	return 0;
}