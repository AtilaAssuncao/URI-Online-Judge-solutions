#include<stdio.h>

int main(){
	
	unsigned int x,y,v=1;
	
	scanf("%d", &x);
	
	y=x;

	if( x>=1 && x<=1000 ){
		
		while(y>=1 && v<=x){
			
			if(y%2==1){
				printf("%d\n",v);
				v=v+2;
			}
		
			y--;
		}
	}
	
	return 0;
}