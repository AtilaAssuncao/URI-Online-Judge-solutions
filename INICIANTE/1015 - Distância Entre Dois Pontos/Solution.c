#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	float x1,x2, y1,y2, p1,p2, rs, dist;

	scanf( "%f %f", &x1, &y1 );
	scanf( "%f %f", &x2, &y2 );

	p1 = pow(( x2 - x1 ), 2 );
	p2 = pow(( y2 - y1 ), 2 );

	rs = p1 + p2;

	dist = sqrt( rs );
	printf("%.4f\n", dist );
	
	return 0;
}