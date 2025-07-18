#include <cstdio>

int main() {
    double precos[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    int item, qtd;
    
    scanf("%d %d", &item, &qtd);
    
    printf("Total: R$ %.2f\n", (precos[item-1]*qtd));

    return 0;
}