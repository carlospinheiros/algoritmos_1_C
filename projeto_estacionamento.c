/*
O programa deve calcular e imprimir a área de estacionamento necessária (soma da área para carros com a área para motocicletas) para cada projeto.
No final deve mostrar a área de estacionamento do projeto com maior nº de vagas para motocicletas.
Obs.: Apenas quando necessário, o programa deverá ler um número real representando a área total da construção relativa às unidades.
*/

#include <stdio.h>

void calc_Vagas(int tipo, int qtdUni, int *vgCarros, int *vgMotos)
{
    float areaConst;
    if(tipo==1)
    {
        *vgCarros=qtdUni+(qtdUni/5);
        *vgMotos=qtdUni*2;
    }
    else
    {
        printf("Informe a AREA TOTAL DA CONSTRUCAO para o CALCULO DAS VAGAS PARA CARROS E MOTOS:\n");
        scanf("%f",&areaConst);
        if(tipo==2)
        {
            if(areaConst<150)
            {
                *vgCarros=qtdUni+2*(areaConst/50);
            }
            else
            {
                *vgCarros=qtdUni+3*(areaConst/50);
            }
            *vgMotos=qtdUni*2;
        }
        else
        {
            *vgCarros=(qtdUni/2)+(areaConst/50);
            *vgMotos=areaConst/40;
        }
    }
    return;
}

int main (void)
{
    int tipo,qtdUni,vgCarros,vgMotos,maiorvgMotos=0;
    float area,areamaiorVg=0;

    printf("Informe o TIPO DE CONSTRUCAO DESEJADA (1-UNIFAMILIAR | 2-MULTIFAMILIAR | 3-HOSPITALAR | 4-COMERCIAL) OU DIGITE 0 (ZERO) PARA ENCERRAR:\n");
    scanf("%d",&tipo);
    while(tipo!=0)
    {
        printf("\nInforme a QUANTIDADE DE UNIDADES DA CONSTRUCAO:\n");
        scanf("%d",&qtdUni);
        calc_Vagas(tipo,qtdUni,&vgCarros,&vgMotos);
        area=(vgCarros*15)+(vgMotos*8);
        if(maiorvgMotos<vgMotos)
        {
            maiorvgMotos=vgMotos;
            areamaiorVg=area;
        }
        printf("\n--- AREA DO ESTACIONAMENTO DO PROJETO==> %.2fm2 ---\n--- VAGA PARA MOTOS==> %d ---\n\n",area,vgMotos);
        printf("Informe o TIPO DE CONSTRUCAO DESEJADA (1-UNIFAMILIAR | 2-MULTIFAMILIAR | 3-HOSPITALAR | 4-COMERCIAL) OU DIGITE 0 (ZERO) PARA ENCERRAR:\n");
        scanf("%d",&tipo);
    }
    printf("\n--- AREA COM MAIOR NUMERO DE VAGAS PARA MOTOS==> %.2fm2 ---\n--- TOTAL DE VAGAS PARA MOTOS==> %d ---\n\n",areamaiorVg,maiorvgMotos);

    return 0;
}
