#include <cstdio>

int main(){
	int x, y;

	scanf("%d %d", &x, &y);
	
	if(x > y){
		x = y + x;
		y = x - y;
		x = x - y;
	}

	for(int i=x; i<=y; i++){
		printf("%d\n",i);
	}
	return 0;
}
