#include<stdio.h>

int main(){

	int idade = 0, dia = 0, mes = 0, ano = 0;

	scanf("%d", &idade);

	if (idade>=365){
		ano = idade / 365;
		idade -= ano*365;
	}
	if (idade>=30){
		mes = idade / 30;
		idade -= mes*30;
	}
	if (idade<30){
		dia = idade;
	}

	printf("%d ano(s)\n", ano );
	printf("%d mes(es)\n", mes );
	printf("%d dia(s)\n", dia );

	return 0;
}