#include <stdio.h>

int main(){
	
	int x;
	float y , valor;

	scanf("%d" ,&x);
	scanf("%f" ,&y);

	valor = x/y;

	printf("%.3f km/l\n", valor);

	return 0;
}