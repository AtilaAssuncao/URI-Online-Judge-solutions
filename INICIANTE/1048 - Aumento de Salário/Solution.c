#include <stdio.h>

int main(){
	
	float salario,r=0,p=0;

	scanf("%f", &salario);

	if (salario >= 0 && salario <= 400.00){		r=(15.0/100) 		;}else
	if (salario >= 400.01 && salario <= 800){	r=(12.0/100)		;}else
	if (salario >= 800.01 && salario <= 1200){	r=(10.0/100)		;}else
	if (salario >= 1200.01 && salario <= 2000){	r=(7.0/100)			;}else
	if (salario > 2000){						r=(4.0/100)			;}

	p = salario*r;

	printf("Novo salario: %.2f\n", (salario+p));
	printf("Reajuste ganho: %.2f\n", p);
	printf("Em percentual: %.0f %\n", (r*100));

	return 0;
}