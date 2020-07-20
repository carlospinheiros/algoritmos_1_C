/*
Faça um programa que leia as quantidades utilizadas, em ml (valores reais), de cada um dos três ingredientes, 
calcule e exiba o percentual de cada ingrediente na composição do novo drink. 
*/

#include <stdio.h>

float percentual (float qtda, float qtdb, float qtdc){

    float percentual;

    percentual=qtda*100/(qtda+qtdb+qtdc);
	
    return percentual;
}

int main (void)
{
	float ing1,ing2,ing3,perc1,perc2,perc3;

        printf("Informe a QUANTIDADE (em ml) de 3 INGREDIENTES:\n");
        scanf("%f%f%f",&ing1,&ing2,&ing3);

        perc1=percentual(ing1,ing2,ing3);
        perc2=percentual(ing2,ing1,ing3);
        perc3=percentual(ing3,ing1,ing2);
        printf("\nPERCENTUAL 1o INGREDIENTE==> %.0f\nPERCENTUAL 2o INGREDIENTE==> %.0f\nPERCENTUAL 3o INGREDIENTE==> %.0f\n",perc1,perc2,perc3);

	return 0;
}
