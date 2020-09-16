#include<stdio.h>

int main(){

	int v[5],par=0,imp=0,pos=0,neg=0,i,j;

	for (i=0; i<5; i++){
		scanf("%d",&v[i]);
	}
	for (j=0; j<5; j++){
		if (v[j]%2==0){
			par++;
		}
		if (v[j]%2!=0){
			imp++;
		}
		if (v[j]>0){
			pos++;
		}
		if (v[j]<0){
			neg++;
		}
	}

	printf("%d valor(es) par(es)\n", par );
	printf("%d valor(es) impar(es)\n", imp );
	printf("%d valor(es) positivo(s)\n", pos );
	printf("%d valor(es) negativo(s)\n", neg );
	return 0;
}	