#include <stdio.h>

int main(){

	unsigned int hi,mi,hf,mf, hora=0 ,mminuto=0;

	scanf("%d %d %d %d",&hi,&mi, &hf,&mf);

	if ((hi>=0 && hi<24) && (hf>=0 && hf<24) && (mi>=0 && mi<60) && (mf>=0 && mf<60)){

		if (hi < hf){ 								hora = hf-hi			;}else 
		if (hi > hf){ 								hora = 24-hi+hf			;}

		if (mi < mf){								mminuto = mf-mi			;}else 
		if (mi > mf){								mminuto = 60-mi+mf		;}

		if (hi==hf && mi == mf){ 					hora = 24				;}else

		if (hi<=hf && mi<mf){
			if ((hf-hi) < 0 && ((mf-mi)<0)){		hora = 0				;}
		}else
		if (hi==hf && (mi>mf || mi<mf)){ 			hora = (24-hi+hf)-1		;}else
		if (hi==hf && mi != mf){ 					hora = 0				;}else
		if ((hi>hf) && (mi>mf)){ 					hora --					;}else
		if ((60-mi+mf) != 0){

 				if ((hi<hf) && ((mi-mf)>0)){		hora --					;}else 
 				if ((hi>hf) && ((mi-mf)<0)){		hora ++					;}else 
				if ((hi<hf) && ((mi-mf)==0)){		hora = hora 			;}else 
				if ((mi+mf) < 30){					hora ++					;}
 		}

		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,mminuto);
	}
		
	return 0;
}