#include <cstdio>

int main(){
    int valor, maior;
    
    scanf("%d", &valor);
    maior = valor;
    
    for(int i = 0; i < 2; i++){
        scanf("%d", &valor);
        
        if(valor > maior)
            maior = valor;
    }
    
    printf("%d eh o maior\n", maior);
    
    return 0;
}