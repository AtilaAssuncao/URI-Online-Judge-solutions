#include <stdio.h>

int main(){

	unsigned int hi,hf, final;

	scanf("%d %d", &hi, &hf);

	if ((hi>=0 && hi<24) && (hf>=0 && hf<24)){

		if (hi < hf){
			final = hf-hi;
		}if (hi > hf){
			final = 24-hi+hf;
		}
		if (hi == hf){
			final = 24;
		}
		
		printf("O JOGO DUROU %d HORA(S)\n",final);
	}
	return 0;
}