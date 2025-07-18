#include <cstdio>

int main()
{
    double salario, reajuste;
    
    scanf("%le", &salario);
    
    if(!(salario > 400.00)){
        reajuste = salario*0.15;
    } else if (!(salario > 800.00)){
        reajuste = salario*0.12;
    } else if (!(salario > 1200)){
        reajuste = salario*0.10;
    } else if (!(salario > 2000)){
        reajuste = salario*0.07;
    } else {
        reajuste = salario*0.04;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.f %%\n", salario+reajuste, reajuste, (reajuste*100)/salario);
    
    return 0;
}