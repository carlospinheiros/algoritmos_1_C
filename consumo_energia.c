/*
Faça um programa em C, utilizando as funções abaixo, que leia as informações sobre o consumo de energia de um usuário da LIGHT e
exiba o valor total da conta a pagar.  Deverão ser lidas as seguintes informações:
- bandeira: inteiro (1-verde, 2-amarela, 3-vermelha);
- usuário: inteiro (1-residencial, 2-não residencial);
- consumo  mensal em KWH: real.
*/

#include <stdio.h>

float determinaValorKWH(int a, int b){

	if (b==3){
		if(a==1){
			float c=6;
			return c;
			}else{
				float c=5;
				return c;
				}
		}else{
			if(b==2){
				float c=4.5;
				return c;
				}else{
					float c=3.2;
					return c;
					}
			}
}

float calcula_TaxaExtra(int a, int b, float c){

    int func;

	if(c>100 && b>1){
		if(a==1){
		float d=determinaValorKWH(a,b)*c*0.5;
	    return d;
		}else{
            printf("\nInforme o NUMERO DE FUNCIONARIOS:\n");
			scanf("%i",&func);
			if(func<100){
				float d=determinaValorKWH(a,b)*c*0.02;
				return d;
				}else{
					float d=determinaValorKWH(a,b)*c*0.03;
					return d;
					}
			}
		}
}

float calculaConta(int a, int b, float c){

	if(c<=100){
		float d=determinaValorKWH(a,b)*c;
		return d;
		}else{
			if(c>100 && b==1){
			float d=determinaValorKWH(a,b)*c;
			return d;
			}else{
				float d=determinaValorKWH(a,b)*c+calcula_TaxaExtra(a,b,c);
				return d;
				}
			}
}

int main (void)
{
	int band,usua;
	float cons,valPag;

		printf("Informe a BANDEIRA (1-VERDE | 2-AMARELA | 3-VERMELHA):\n");
		scanf("%i",&band);
		printf("\nInforme o USUARIO (1-RESIDENCIAL | 2-NAO RESIDENCIAL):\n");
		scanf("%i",&usua);
		printf("\nInforme o CONSUMO MENSAL (KWH):\n");
		scanf("%f",&cons);

		valPag=calculaConta(usua,band,cons);
		printf("\nVALOR TOTAL A PAGAR==> R$%.2f\n",valPag);

    return 0;
}
