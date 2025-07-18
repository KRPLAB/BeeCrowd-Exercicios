#include <cstdio>

int main()
{
    char nome[100];
    double salario_base, vendas;
    
    fgets(nome, sizeof(nome), stdin);
    
    
    scanf("%le", &salario_base);
    scanf("%le", &vendas);
    
    printf("TOTAL = R$ %.2f\n", (salario_base+(vendas*0.15)));

    return 0;
}