#include <cstdio>

int main(){
	int x, y;

	scanf("%d %d", &x, &y);
	
	if(x > y){
		x = x + y;
		y = x - y;
		x = x - y;
	}

	for(int i = x; i < y; i++){
		if(i%5 == 2 || i%5 == 3)
			printf("%d\n", i);
	}
	return 0;
}
