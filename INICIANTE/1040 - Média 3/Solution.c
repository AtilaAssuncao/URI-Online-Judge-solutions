#include <stdio.h>

int main(){

	float N1,N2,N3,N4,N5,  M,R;

	scanf("%f %f %f %f",&N1,&N2,&N3,&N4);

	M = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;

	printf("Media: %.1f\n", M);

	if(M>=7.0){ printf("Aluno aprovado.\n"); } 

	if(M<5.0){ printf("Aluno reprovado.\n"); }

	if((M >= 5.0) && (M < 7.0)){

		printf("Aluno em exame.\n");

		scanf("%f",&N5);

		printf("Nota do exame: %.1f\n", N5);

		R = (N5+M)/2;

		if(R >= 5.0){ printf("Aluno aprovado.\n"); }

		if(R <= 4.9){ printf("Aluno reprovado.\n"); }

		printf("Media final: %.1f\n",R);
	}

	return 0;
}