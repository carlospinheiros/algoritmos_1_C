/*
Um atelier deseja cobrir todos os 6 lados de suas caixas retangulares com retângulos de cartolina colorida. 
Faça um programa que leia a largura e o comprimento de um retângulo de cartolina  e a altura, a largura e o comprimento de n(lido) caixas, 
calculando e exibindo a quantidade necessária de retângulos de cartolina para cobrir todos os lados da caixa. 
*/

#include <stdio.h>

int calcula_area(int med1, int med2)
{
    int area;
    area=med1*med2;
    return area;
}

int calcula_qtdRetLado(int areaLado, int areaRetCartolina)
{
    int qtd_RetLado,resto;
    resto=areaLado%areaRetCartolina;
    if(resto>0)
    {
        qtd_RetLado=(areaLado/areaRetCartolina)+1;
    }
    else
    {
        qtd_RetLado=areaLado/areaRetCartolina;
    }
    return qtd_RetLado;
}

int calcula_qtdRetCaixa(int altCx, int largCx, int comprCx, int areaRetCartolina)
{
    int qtd_RetCaixa;
    qtd_RetCaixa=(2*calcula_qtdRetLado(calcula_area(largCx,comprCx),areaRetCartolina))+(2*calcula_qtdRetLado(calcula_area(largCx,altCx),areaRetCartolina))+(2*calcula_qtdRetLado(calcula_area(comprCx,altCx),areaRetCartolina));
    return qtd_RetCaixa;
}

int main (void)
{
    int largCart,compCart,altCx,largCx,compCx,areaCart,area_LadoCx,qtd_RetLado,qtd_RetCx=0,cont=0,qtdCx,altCx1=0,largCx1=0,compCx1=0,altCx2=0,largCx2=0,compCx2=0,maior1=0,maior2=0;

    printf("Informe a ALTURA e o COMPRIMENTO DA CARTOLINA:\n");
    scanf("%d%d",&largCart,&compCart);

    printf("Informe a QUANTIDADE DE CAIXA(s):\n");
    scanf("%d",&qtdCx);

    while (cont<qtdCx){
        printf("\nInforme a ALTURA, LARGURA e COMPRIMENTO DA %da CAIXA:\n",cont+1);
        scanf("%d%d%d",&altCx,&largCx,&compCx);

        areaCart=calcula_area(largCart,compCart);
        area_LadoCx=calcula_area(altCx,largCx);

        qtd_RetLado=calcula_qtdRetLado(area_LadoCx,areaCart);
        qtd_RetCx=calcula_qtdRetCaixa(altCx,largCx,compCx,areaCart);

        if (maior1<=qtd_RetCx){
            maior2=maior1;
            altCx2=altCx1;
            largCx2=largCx1;
            compCx2=compCx1;

            maior1=qtd_RetCx;
            altCx1=altCx;
            largCx1=largCx;
            compCx1=compCx;
            }
        cont=cont+1;
        }
        printf("\n--- CAIXAS QUE PRECISAM DO MAIOR NUMERO DE RETANGULOS DE CARTOLINA ---\n");
        printf("\n1a CAIXA - DIMENSOES:\nALTURA:%d\nLARGURA:%d\nCOMPRIMENTO:%d\nQTD de RETANGULOS:%d\n",altCx1,largCx1,compCx1,maior1);
        printf("\n2a CAIXA - DIMENSOES:\nALTURA:%d\nLARGURA:%d\nCOMPRIMENTO:%d\nQTD de RETANGULOS:%d\n",altCx2,largCx2,compCx2,maior2);

    return 0;
}
