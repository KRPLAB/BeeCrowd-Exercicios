#include <cstdio>

int main() {
    double soma = 0;
    int numero;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numero);
        soma += numero;
    }

    printf("A média foi %.2f\n", soma/10.0);

    return 0;
}