#include <stdio.h>

int main(){

	int tempo, velocidadeM ;
	float gasto ,distancia ,consumo = 12;

	scanf("%d",&tempo);
	scanf("%d",&velocidadeM);

	distancia = tempo*velocidadeM;

	gasto = distancia/consumo;

	printf("%.3f\n",gasto );

	return 0;
}