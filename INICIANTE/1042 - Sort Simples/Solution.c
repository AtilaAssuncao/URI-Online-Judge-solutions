#include <stdio.h>
#include <math.h>

int main(){

	int a,b,c, maior, menor, meio;

	scanf("%d %d %d",&a,&b,&c);

	maior = fmax(a,fmax(b,c));
	menor = fmin(a,fmin(b,c));

	if ((a != maior) && (a != menor)){
		meio = a;
	}else if((b != maior) && (b != menor)){
		meio = b;
	}else if((c != maior) && (c != menor)){
		meio = c;
	}

	printf("%d\n", menor );
	printf("%d\n", meio );
	printf("%d\n\n", maior );

	printf("%d\n", a );
	printf("%d\n", b );
	printf("%d\n", c );

	return 0;
}