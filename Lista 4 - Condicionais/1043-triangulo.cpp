#include <cstdio>

int main(){
    double a, b, c;
    
    scanf("%le %le %le", &a, &b, &c);
    
    if((a < b + c ) && ( b < a + c ) && ( c < a + b)){
        printf("Perimetro = %.1f\n", (a+b+c));
    } else {
        printf("Area = %.1f\n", ((a+b)*c)/2);
    }
    
    return 0;
}