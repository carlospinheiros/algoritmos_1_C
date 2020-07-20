/*
Faça um programa que leia o valor exato de um número x e seu valor aproximado x e exiba o erro percentual.
*/

#include <stdio.h>

float erro_absoluto(float exato, float aproximado){

    float absoluto;

    absoluto=exato-aproximado;
    return absoluto;
}

float erro_relativo(float exato, float aproximado){

    float relativo;

    relativo=erro_absoluto(exato,aproximado)/aproximado;
    return relativo;
}

 void erro_percentual(float exato, float aproximado){

     float percentual;

     percentual=erro_relativo(exato,aproximado)*100;
     printf("\n--- ERRO PERCENTUAL DO NUMERO %.2f ===> %.2f ---\n\n",exato,percentual);
}

int main (void)
{
    float exato,aproximado;

        printf("Informe um NUMERO e seu NUMERO APROXIMADO:\n");
        scanf("%f%f",&exato,&aproximado);

        erro_percentual(exato,aproximado);

    return 0;
}
