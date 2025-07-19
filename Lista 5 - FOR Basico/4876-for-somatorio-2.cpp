#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    int soma = 0;
    int numero;

    for (int i = 0; i < n; i++) {
        scanf("%d", &numero);
        soma += numero;
    }

    printf("A soma foi %d\n", soma);

    return 0;
}