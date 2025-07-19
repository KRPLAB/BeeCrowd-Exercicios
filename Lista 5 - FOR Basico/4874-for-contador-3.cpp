#include <cstdio>

int main()
{
    int n;
    int cont_neg = 0;
    int cont_pos = 0;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int valor;
        scanf("%d", &valor);
        
        if(valor > 0){
            cont_pos++;
        } else if(valor < 0) {
            cont_neg++;
        }
    }
    
    printf("%d valores positivos\n%d valores negativos\n", cont_pos, cont_neg);
    return 0;
}