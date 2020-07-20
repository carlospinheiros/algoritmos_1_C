/*
Faça um programa para controlar os pedidos de reservas de ingressos das 28 modalidades esportivas da Olimpíada Universitária Brasileira.
O programa deverá ler, para cada modalidade esportiva, o código da modalidade (inteiro), a quantidade de ingressos disponíveis (inteiro),
o preço unitário (real) e, utilizando a função do item a, processar os pedidos de reserva de ingressos da modalidade.
*/

#include <stdio.h>

int processa_uma_modalidade(int codmod, int qtddisp, float preco){

    int comprador=1,qtddes,total=0;
    float valor;

    while(comprador!=0){
            printf("\nInforme o NUMERO DE IDENTIFICACAO DO COMPRADOR? PARA ENCERRAR DIGITE 0:\n");
            scanf("%i",&comprador);
            if(comprador !=0){
                    printf("Informe a QUANTIDADE DE INGRESSOS DESEJADOS:\n");
                    scanf("%i",&qtddes);
                    if(qtddes>=6){
                            printf("ACIMA DO MAXIMO PERMITIDO!\n");
                    }else{
                        if(total-qtddisp==0){
                                printf("INGRESSOS ESGOTADOS!\n");
                        }else{
                            if(qtddes+total>qtddisp){
                                    printf("QUANTIDADE DESEJADA ACIMA DA DISPONIVEL! ==> RESTAM %d!\n",qtddisp-total);
                            }else{
                                total=qtddes+total;
                                valor=qtddes*preco;
                                printf("\n--- NUMERO DE INDENTIFICACAO DO COMPRADOR: %d --- \n--- VALOR DO PEDIDO: R$ %.2f --- \n",comprador,valor);
                                }
                            }
                        }
                    }
            }
    return total;
}

int main (void)
{
    int codmod,qtddisp,disp,cont=0,reservado,maior=0,maiormod=0;
    float preco;

        while(cont<28){
            printf("\nInforme o CODIGO DA MODALIDADE e a QUANTIDADE DE INGRESSOS:\n");
            scanf("%i%i",&codmod,&qtddisp);
            printf("Informe o VALOR DO INGRESSO:\n");
            scanf("%f",&preco);

            reservado=processa_uma_modalidade(codmod,qtddisp,preco);
            disp=qtddisp-reservado;

            printf("\n--- CODIGO DA MODALIDADE: %d --- \n--- INGRESSOS DISPONIVEIS: %d ---\n",codmod,disp);

            if (reservado>maior){
                    maior=reservado;
                    maiormod=codmod;
                    }
            cont=cont+1;
            }
            printf("\n--- %d foi a MODALIDADE com o MAIOR NUMERO DE INGRESSOS RESERVADOS: %d ---\n",maiormod,maior);

    return 0;
}
