#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    int soma_positivos = 0;
    int soma_negativos = 0;
    int numero;

    for (int i = 0; i < n; i++) {
        scanf("%d", &numero);
        if (numero > 0) {
            soma_positivos += numero;
        } else if (numero < 0) {
            soma_negativos += numero;
        }
    }

    printf("A soma dos positivos foi %d\n", soma_positivos);
    printf("A soma dos negativos foi %d\n", soma_negativos);

    return 0;
}