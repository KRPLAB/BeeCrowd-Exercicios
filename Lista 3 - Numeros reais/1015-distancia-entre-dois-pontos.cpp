#include <cstdio>
#include <cmath>

int main(){
    double x1, x2;
    double y1, y2;
    double distancia;
    
    scanf("%le %le", &x1, &y1);
    scanf("%le %le", &x2, &y2);
    distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    printf("%.4f\n", distancia);
    
    return 0;
}