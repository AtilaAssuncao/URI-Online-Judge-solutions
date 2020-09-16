#include <stdio.h>

long long int fat(long long int n){
	if(n==0){return 1 ;}
	else{return n*fat(n-1);}
}

int main(){

	unsigned long long int result,m,n,f1,f2;

	while(scanf("%lld %lld",&m,&n) != EOF ){

		result = fat(m)+fat(n);

		printf("%lld\n",result);
	}

	return 0;
}