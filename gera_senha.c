/*
Faça um programa em C que capture o dia, mês e ano de nascimento de um aluno e mostre sua senha. Seu programa deve chamar adequadamente a seguinte função:
int soma_dig(int n): esta função recebe como parâmetro um número inteiro de 2 algarismos e retorna a soma dos algarismos deste número.
*/

# include <stdio.h>

int soma_Dig(int n){
	int d=(n/10)+(n%10);
	return d;
	}

int main (void)
{
	int dia,mes,ano,senha;

		printf("Informe o DIA DO SEU NASCIMENTO (DD):\n");
		scanf("%i",&dia);
		printf("\nInforme o MES DO SEU NASCIMENTO (MM):\n");
		scanf("%i",&mes);
		printf("\nInforme o ANO DO SEU NASCIMENTO (AAAA):\n");
		scanf("%i",&ano);

		ano=ano%100;
		senha=soma_Dig(dia)+soma_Dig(mes)+soma_Dig(ano);

		printf("\nSENHA INICIAL DO CARTAO MAGNETICO DA BIBLIOTECA=> %d\n\n",senha);

	return 0;
}
