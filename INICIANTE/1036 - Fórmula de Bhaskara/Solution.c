#include<stdio.h>
#include <math.h>

int main(){

	double a,b,c, delt, x1,x2;

	scanf("%lf %lf %lf" ,&a,&b,&c);

	delt = (b*b)-4*a*c;
	
	if (delt >= 0 && a != 0){

		x1 = ((-b)+sqrt(delt))/(2*a);
		x2 = ((-b)-sqrt(delt))/(2*a);

		printf("R1 = %.5lf\n", x1 );
		printf("R2 = %.5lf\n", x2 );

	}else{
		printf("Impossivel calcular\n");
	}


	return 0;
}