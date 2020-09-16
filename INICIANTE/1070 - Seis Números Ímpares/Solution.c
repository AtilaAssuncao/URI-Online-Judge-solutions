#include <stdio.h>

int main(){
	
	int x,cont = 1;

	scanf("%d", &x);

	if (x%2==1){
		printf("%d\n",x);
		cont++;
	}
	
	while(cont<=6){
		x++;
		if (x%2==1){
			printf("%d\n",x);
			cont++;
		}
	}

	return 0;
}