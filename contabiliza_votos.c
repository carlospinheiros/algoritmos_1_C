/*
Uma universidade deseja saber se os alunos do ciclo básico (CB) e os do ciclo profissional (CP) dos cursos de Engenharia aprovam a mudança de horário proposta pela reitoria.
Faça um programa que, para cada um dos cursos de Engenharia: (término da entrada de dados: código == 0)
Ao final, o programa deve exibir se a maioria dos alunos aprova ou rejeita a mudança. Entende-se por maioria qualquer valor superior a 50% do total de alunos.
Observação: todos os valores lidos são inteiros; assuma que o usuário digitará sempre valores coerentes que não precisam ser validados.
*/

#include <stdio.h>

int contabiliza_aprovacao (int numAlunos)
{
    int opiniao,cont=0,respSIM=0;
    while(cont<numAlunos)
    {
        printf("--- %do ALUNO ---\n",cont+1);
        printf("Informe sua OPINIAO (1 - APROVA | 0 - REJEITA):\n");
        scanf("%d",&opiniao);
        if (opiniao==1)
        {
            respSIM=respSIM+1;
        }
        cont=cont+1;
    }
    return respSIM;
}


void exibe_decisao (int numAlunos, int respSIM)
{
    int decisao;
    decisao=(respSIM*100)/numAlunos;
    if(decisao>50)
    {
        printf("\n--- MUDANCA APROVADA ---\n\n");
    }
    else
    {
        printf("\n--- MUDANCA REJEITADA ---\n\n");
    }
}

int main (void)
{
    int codCurso,qtdCB,qtdCP,decisaoCB,decisaoCP,decisao=0,numAlunos=0;

    printf("Informe o CODIGO DO CURSO ou DIGITE 0 (ZERO) para ENCERRAR:\n");
    scanf("%d",&codCurso);

    while (codCurso!=0){
        printf("\nInforme a QUANTIDADE DE ALUNO(s) NO CB - CICLO BASICO:\n");
        scanf("%d",&qtdCB);
        decisaoCB=contabiliza_aprovacao(qtdCB);

        printf("\nInforme a QUANTIDADE DE ALUNO(s) NO CP - CICLO PROFISSIONAL:\n");
        scanf("%d",&qtdCP);
        decisaoCP=contabiliza_aprovacao(qtdCP);

        printf("\n--- ALUNOS QUE CONCORDAM ---\nALUNOS do CB: %d\nALUNOS do CP: %d\n\n",decisaoCB,decisaoCP);

        decisao=decisaoCB+decisaoCP;
        numAlunos=qtdCB+qtdCP;

        printf("Informe o CODIGO DO CURSO ou DIGITE 0 (ZERO) para ENCERRAR:\n");
        scanf("%d",&codCurso);
    }
    exibe_decisao(numAlunos,decisao);

    return 0;
}
