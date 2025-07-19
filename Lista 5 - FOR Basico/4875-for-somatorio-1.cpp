#include <cstdio>

int main() {
    int soma = 0;
    int numero;   

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numero); 
        soma += numero;
    }

    printf("A soma foi %d\n", soma); 

    return 0;
}