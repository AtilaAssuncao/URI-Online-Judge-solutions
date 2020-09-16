#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	double R, cal, pot, pi = 3.14159;

	scanf( "%lf", &R );

	cal = (4.0/3) * pi * pow( R, 3 );

	printf("VOLUME = %.3lf\n", cal );
	
	return 0;
}