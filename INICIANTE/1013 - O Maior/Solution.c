#include<stdio.h>
#include <stdlib.h>

int main(){
	
	int a, b, c , maior, valor1, valor2;

	scanf("%d %d %d", &a, &b ,&c);


	valor1 = (a + b + abs(a-b))/2;

	valor2 = (b + c + abs(b-c))/2;

	if (valor1 > valor2){
		maior = valor1;
	}else{
		maior = valor2;
	}

	printf("%d eh o maior\n", maior);

	return 0;
}