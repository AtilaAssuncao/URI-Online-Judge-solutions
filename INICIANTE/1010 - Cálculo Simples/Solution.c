#include<stdio.h>

int main(){

	int c1, c2, n1, n2;
	float v1, v2, a, b, x;

	scanf("%d %d %f", &c1,&n1,&v1);

	scanf("%d %d %f", &c2,&n2,&v2);

	a = (v1*n1);

	b = (v2*n2);

	x = a+b;

	printf("VALOR A PAGAR: R$ %.2f\n", x);

	return 0;
}