#include <cstdio>
#include <cmath>

double delta(double a, double b, double c) {
    return (b * b) - (4 * a * c);
}

double menor_raiz(double a, double b, double d) {
    return (-b - sqrt(d)) / (2 * a);
}

double maior_raiz(double a, double b, double d) {
    return (-b + sqrt(d)) / (2 * a);
}

int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Impossivel calcular\n");
        return 0;
    } else {
        double d = delta(a, b, c);
        if (d < 0) {
        printf("Impossivel calcular\n");
        } else {
            printf("R1 = %.5f\n", maior_raiz(a, b, d));
            printf("R2 = %.5f\n", menor_raiz(a, b, d));
        }
    }

    return 0;
}