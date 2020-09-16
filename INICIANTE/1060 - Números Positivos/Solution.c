#include<stdio.h>

int main(){

	float v[6];
	int posi=0,i,j;

	for (i=0; i<6; i++){
		scanf("%f",&v[i]);
	}
	for (j=0; j<6; j++){
		if (v[j]>0){
			posi++;
		}
	}

	printf("%d valores positivos\n", posi );
	return 0;
}