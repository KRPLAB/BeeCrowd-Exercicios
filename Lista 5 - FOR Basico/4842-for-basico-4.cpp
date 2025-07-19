#include <cstdio>

int main(){
	int x, y;

	scanf("%d %d", &x, &y);
	if(x == y){
		printf("%d\n",x);
		return 0;
	}
	if(x > y) {
		x = x + y;
		y = x - y;
		x = x - y;
	}

	for(int i = x+1; i < y; i++){
		printf("%d\n", i);
	}

	return 0;
}
