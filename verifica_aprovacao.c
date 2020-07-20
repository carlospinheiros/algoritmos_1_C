/*
Faça um programa que pergunte ao usuário a média de um aluno e seu número de faltas. Deve exibir se o alunos está aprovado ( média >=6 e número de faltas < 5),
se está reprovado por média (média <6 e número de faltas <5) ou reprovado por falta ( número de faltas >=5).
*/

#include <stdio.h>

int main (void)
{
	float media;
	int falt;

		printf("Informe sua MEDIA e o seu NUMERO DE FALTAS:\n");
		scanf("%f %i",&media,&falt);

			if(media>=6 && falt<5){
				printf("\nVOCE ESTA APROVADO!\n\n");
				}else{
					if(media<6 && falt<5){
					printf("\nVOCE ESTA REPROVADO POR MEDIA!\n\n");
					}else{
					printf("\nVOCE ESTA REPROVADO POR FALTA!\n\n");
					}
				}
	return 0;
}
