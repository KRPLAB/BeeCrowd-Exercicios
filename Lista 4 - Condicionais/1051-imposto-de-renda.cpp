#include <cstdio>

int main()
{
    double salario, imposto;
    
    scanf("%le", &salario);
    
    if(!(salario > 2000.00)){
        printf("Isento\n");
        return 0;
    } else if (!(salario > 3000.00)){
        imposto = (salario-2000.00)*0.08;
    } else if (!(salario > 4500.00)){
        imposto = (((salario-3000.00)*0.18) + (1000*0.08));
    } else {
        imposto = (((salario-4500.00)*0.28) + (1500*0.18)+(1000*0.08));
    }

    printf("R$ %.2f\n", imposto);
    
    return 0;
}