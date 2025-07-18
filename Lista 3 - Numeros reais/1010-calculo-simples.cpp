#include <cstdio>

int main()
{
    int cod_prod1, cod_prod2;
    int qtd_prod1, qtd_prod2;
    double preco_prod1, preco_prod2;
    
    scanf("%d %d %le", &cod_prod1, &qtd_prod1, &preco_prod1);
    scanf("%d %d %le", &cod_prod2, &qtd_prod2, &preco_prod2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", ((qtd_prod1*preco_prod1) + (qtd_prod2*preco_prod2)));

    return 0;
}