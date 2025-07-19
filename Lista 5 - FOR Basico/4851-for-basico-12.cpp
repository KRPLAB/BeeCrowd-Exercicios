#include <cstdio>

int main(){
    int x, y;
    
    scanf("%d %d", &x, &y);
    if(y < x){
        x = y + x;
        y = x - y;
        x = x - y;
    }
    
    for(int i = x; i <= y; i++){
        if(i%3 == 0 || i%5 == 0)
            printf("%d\n", i);
    }
    
    return 0;
}