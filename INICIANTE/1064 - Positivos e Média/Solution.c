#include<stdio.h>

int main(){

	float v[6],media=0;
	int posi=0,i,j;

	for (i=0; i<6; i++){
		scanf("%f",&v[i]);
	}
	for (j=0; j<6; j++){
		if (v[j]>0){
			media+=v[j];
			posi++;
		}
	}

	printf("%d valores positivos\n", posi );
	printf("%.1f\n", (media/posi) );
	return 0;
}