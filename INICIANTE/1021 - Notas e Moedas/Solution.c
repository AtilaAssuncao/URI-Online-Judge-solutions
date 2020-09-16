#include <stdio.h>
 
int main() {
 
	float a;
	int temp,c=0;
	scanf("%f",&a);
	
	printf("NOTAS:\n");
	
	for(;a>=100;){
		a-=100;
		c++;
	}
	printf("%i nota(s) de R$ 100.00\n",c);
	
	for(c=0;a>=50;){
		a-=50;
		c++;
	}
	printf("%i nota(s) de R$ 50.00\n",c);
	
	for(c=0;a>=20;){
		a-=20;
		c++;
	}
	printf("%i nota(s) de R$ 20.00\n",c);
	
	for(c=0;a>=10;){
		a-=10;
		c++;
	}
	printf("%i nota(s) de R$ 10.00\n",c);
	
	for(c=0;a>=5;){
		a-=5;
		c++;
	}
	printf("%i nota(s) de R$ 5.00\n",c);
	
	for(c=0;a>=2;){
		a=a-2;
		c++;
	}
	printf("%i nota(s) de R$ 2.00\n",c);
	
	
	printf("MOEDAS:\n");
		
	for(c=0;a>=1;){
		a--;
		c++;
	}
	printf("%i moeda(s) de R$ 1.00\n",c);
	
	for(c=0;a>=0.50;){
		a-=0.5;
		c++;
	}
	printf("%i moeda(s) de R$ 0.50\n",c);
	
	for(c=0;a>=0.25;){
		a-=0.25;
		c++;
	}
	printf("%i moeda(s) de R$ 0.25\n",c);
	
	for(c=0;a>=0.1;){
		a-=0.1;
		c++;
	}
	printf("%i moeda(s) de R$ 0.10\n",c);
	
	for(c=0;a>=0.05;){
		a-=0.05;
		c++;
	}
	printf("%i moeda(s) de R$ 0.05\n",c);
	
	
	for(c=0;a>0.001;){
		a-=0.01;
		c++;
	}
	printf("%i moeda(s) de R$ 0.01\n",c);
     
     return 0;
}