#include <cstdio>

int main()
{
    double n;
    int contador = 0;
    
    for(int i = 0; i < 5; i++){
        scanf("%le", &n);
        if(n > 0)
            contador++;
    }
    
    printf("%d\n", contador);
    return 0;
}