/*
Escreva um programa que capture o valor da  conta, nº de pratos e bebidas consumidos e exiba o montante a ser pago na conta atual e o
vale desconto ( se houver). A idade do cliente só deve ser capturada se necessário.
*/

#include <stdio.h>

float descConta(float a){

    int b;

	if (a>300){
		float c=a*0.25;
		return c;
		}else{
              if(a>100 && a<=300){
                       printf("\nInforme sua IDADE:\n");
			           scanf("%i",&b);
							if(b>50){
								float c=a*0.15;
								return c;
								}else{
									float c=0;
									return c;
									}
						}else{
							float c=0;
							return c;
							}
              }
}

float valeDesc(float a, int b, int c){

	if(a>400){
		float d=100;
		return d;
		}
    if(a>=150 && a<=400){
		if (b>=3&&c>=6){
		float d=50;
		return d;
		}else{
            if(b>=3&&c<6){
			float d=30;
			return d;
			}else{
				if(b<3&&c>=6){
				float d=20;
				return d;
            	}else{
            		float d=0;
		        	return d;
		        	}
				}
        	}
    }
    if(a<150){
		if (b>=1 && c>=1){
			float d=10;
			return d;
			}else{
				float d=0;
		        return d;
				}
		}
}


int main (void){

	float valConta,montante,vale;
	int nPratos,bebCons;

	printf("Informe o VALOR DA CONTA:\n");
	scanf("%f",&valConta);

	printf("\nInforme o NUMERO DE PRATOS e o de BEBIDAS CONSUMIDOS:\n");
	scanf("%i %i",&nPratos,&bebCons);

	montante=valConta-descConta(valConta);
	printf("\nVALOR A SER PAGO==> R$%.2f\n",montante);

    vale=valeDesc(valConta,nPratos,bebCons);
			if(vale>0){
				printf("\nVALE DESCONTO==> R$%.2f\n",vale);
				}
    return 0;
}
