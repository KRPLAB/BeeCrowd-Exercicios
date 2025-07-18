#include <cstdio>
#include <cmath>

#define PI 3.14159

int main(){
    double r;
    
    scanf("%le", &r);
    
    printf("VOLUME = %.3f\n", ((4.0/3) * PI * pow(r,3)));

    return 0;
}