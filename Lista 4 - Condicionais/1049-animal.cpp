#include <cstdio>
#include <cstring>

#define MAX_TAM 30

int main() {
	char classe1[MAX_TAM], classe2[MAX_TAM], classe3[MAX_TAM];

	fgets(classe1, MAX_TAM, stdin);
	fgets(classe2, MAX_TAM, stdin);
	fgets(classe3, MAX_TAM, stdin);

	// Remove o '\n' no final de cada string
	classe1[strcspn(classe1, "\n")] = '\0';
	classe2[strcspn(classe2, "\n")] = '\0';
	classe3[strcspn(classe3, "\n")] = '\0';

	if (strcmp(classe1, "vertebrado") == 0) {
		if (strcmp(classe2, "ave") == 0) {
			if (strcmp(classe3, "carnivoro") == 0) {
				printf("aguia\n");
			} else {
				printf("pomba\n");
			}
		} else {
			if (strcmp(classe3, "onivoro") == 0) {
				printf("homem\n");
			} else {
				printf("vaca\n");
			}
		}
	} else {
		if (strcmp(classe2, "inseto") == 0) {
			if (strcmp(classe3, "hematofago") == 0) {
				printf("pulga\n");
			} else {
				printf("lagarta\n");
			}
		} else {
			if (strcmp(classe3, "hematofago") == 0) {
				printf("sanguessuga\n");
			} else {
				printf("minhoca\n");
			}
		}
	}
	return 0;
}
