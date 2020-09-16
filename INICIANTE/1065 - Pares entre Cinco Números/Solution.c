#include<stdio.h>

int main(){

	int v[5],posi=0,i,j;

	for (i=0; i<5; i++){
		scanf("%d",&v[i]);
	}
	for (j=0; j<5; j++){
		if (v[j]%2==0){
			posi++;
		}
	}

	printf("%d valores pares\n", posi );
	return 0;
}