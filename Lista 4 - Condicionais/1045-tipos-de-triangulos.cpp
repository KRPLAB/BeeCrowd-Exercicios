#include <cstdio>
#include <algorithm>

int determina_angulo(double a, double b, double c) {
	if((a*a) == (b*b) + (c*c)) {
		printf("TRIANGULO RETANGULO\n");
		return -1;
	} else if (a*a > b*b + c*c) {
		printf("TRIANGULO OBTUSANGULO\n");
	} else if (a*a < b*b + c*c) {
		printf("TRIANGULO ACUTANGULO\n");
	}

	return 0;
}

void determina_lado(double a, double b, double c) {
	if(( a == b ) && ( b == c)) {
		printf("TRIANGULO EQUILATERO\n");
	} else if (( a == b ) || ( b == c ) || ( c == a )) {
		printf("TRIANGULO ISOSCELES\n");
	}

	return;
}

int main() {
	double a, b, c;

	scanf("%le %le %le", &a, &b, &c);

    //ordenando p/ garantir que lado A eh o maior
	if (a < b) std::swap(a, b);
	if (a < c) std::swap(a, c);

	if(!((a < b + c ) && ( b < a + c ) && ( c < a + b))) {
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	};

	if(determina_angulo(a,b,c) == -1)
	    return 0;
	    
	determina_lado(a,b,c);

	return 0;
}