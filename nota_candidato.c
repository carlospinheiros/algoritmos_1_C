/*
Faça um programa que leia as duas notas dadas por cada entrevistado e exiba:
- A soma das notas obtidas pelo candidato A e a soma das notas obtidas pelo candidato B;
- O total de entrevistados que deram nota 0 (zero) aos 2 candidatos.
Obs.: Foi usado o exemplo para 2 entrevistados.
*/

#include <stdio.h>

int main (void)
{
    int cont=0,candA,candB,somaA=0,somaB=0,somaZero=0;

	while(cont<2){
            printf("\n%do ENTREVISTADO\n\n",cont+1);
            printf("Informe uma NOTA (entre 0 e 5) para o CANDIDADTO A:\n");
            scanf("%d",&candA);
            printf("Informe uma NOTA (entre 0 e 5) para o CANDIDADTO B:\n");
            scanf("%d",&candB);

            somaA=somaA+candA;
            somaB=somaB+candB;

            if(candA==0&&candB==0){
                    somaZero=somaZero+1;
            }
            cont=cont+1;
            }
            printf("\n\nSOMA DAS NOTAS - CANDIDATO A ==> %d\nSOMA DAS NOTAS - CANDIDATO B ==> %d\nTOTAL DE ENTREVISTADOS QUE DERAM NOTA ZERO AOS 2 CANDIDATOS ==> %d\n",somaA,somaB,somaZero);

	return 0;
}
