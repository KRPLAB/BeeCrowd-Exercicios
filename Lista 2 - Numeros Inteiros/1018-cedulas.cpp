#include <cstdio>

int main()
{
    int total, total_aux;
    int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0,
    nota5 = 0, nota2 = 0, nota1 = 0;
    
    scanf("%d", &total);
    total_aux = total;
    
    nota100 = total/100;
    total %= 100;
    
    nota50 = total/50;
    total %= 50;
    
    nota20 = total/20;
    total %= 20;
    
    nota10 = total/10;
    total %= 10;
    
    nota5 = total/5;
    total %= 5;
    
    nota2 = total/2;
    total %= 2;
    
    nota1 = total/1;
    total %= 1;
    
    
    
    printf("%d\n", total_aux);
    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);
    return 0;
}