#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    int soma_impares = 0;
    int numero;

    for (int i = 0; i < n; i++) {
        scanf("%d", &numero);
        if (numero % 2 != 0) {
            soma_impares += numero;
        }
    }

    printf("A soma dos ímpares foi %d\n", soma_impares);

    return 0;
}