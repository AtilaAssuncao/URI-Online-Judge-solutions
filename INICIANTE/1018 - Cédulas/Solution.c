#include<stdio.h>

int main(){

	unsigned int x, um=0, dois=0, cinco=0, dez=0, vinte=0, cinquenta=0, cem=0;

	scanf("%d",&x);
	printf("%d\n", x);

		if (x >= 100){
			cem = x/100;
			x -= cem*100;
		}
		if (x >= 50){
			cinquenta = x/50;
			x -= cinquenta*50;
		}
		if (x >= 20){
			vinte = x/20;
			x -= vinte*20;
		}
		if (x >= 10){
			dez = x/10;
			x -= dez*10;
		}
		if (x >= 5){
			cinco = x/5;
			x -= cinco*5;
		}
		if (x >= 2){
			dois = x/2;
			x -= dois*2;
		}
		if (x >= 1){
			um = x/1;
			x -= um*1;
		}

	printf("%d nota(s) de R$ 100,00\n", cem );
	printf("%d nota(s) de R$ 50,00\n", cinquenta );
	printf("%d nota(s) de R$ 20,00\n", vinte );
	printf("%d nota(s) de R$ 10,00\n", dez );
	printf("%d nota(s) de R$ 5,00\n", cinco );
	printf("%d nota(s) de R$ 2,00\n", dois );
	printf("%d nota(s) de R$ 1,00\n", um );

	return 0;
}