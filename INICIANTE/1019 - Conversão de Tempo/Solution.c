#include<stdio.h>

int main(){

	int tempo, hor = 0, min = 0, seg = 0;

	scanf("%d",&tempo);

	if (tempo >= 3600){
		hor = tempo/3600;
		tempo -= hor*3600;
	}
	if (tempo >= 60){
		min = tempo/60;
		tempo -= min*60;

	}if(tempo < 60){
		seg = tempo;
	}
	printf("%d:%d:%d\n", hor, min, seg);

	return 0;
}