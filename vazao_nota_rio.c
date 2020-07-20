/*
Faça um programa que leia a largura, a profundidade e a velocidade da água de um rio e exiba sua nota.
O programa deverá exibir também a mensagem “Alternativa viável”, APENAS quando o rio for uma alternativa viável, isto é,
a sua nota for maior ou igual a sete (7).
*/

#include <stdio.h>
#include <math.h>

float vazaoRio(float largura,float profundidade,float velocidade)
{
    float vazao;
    vazao=pow(largura,2)*profundidade*velocidade;
    return vazao;
}

float notaRio(float largura,float profundidade,float velocidade)
{
    if(profundidade<6){
            return 0;
    }else{
        if(largura<15){
                return 0;
        }else{
            if(largura<=30){
                    if(vazaoRio(largura,profundidade,velocidade)<5000){
                            return (5+vazaoRio(largura,profundidade,velocidade))/2700;
                    }else{
                        return (5+vazaoRio(largura,profundidade,velocidade))/2500;
                        }
            }else{
                return(5+vazaoRio(largura,profundidade,velocidade))/2000;
                }
            }
        }
}

int main (void)
{
    float largura,profundidade,velocidade,nota;

        printf("Informe a LARGURA:\n");
        scanf("%f",&largura);
        printf("Informe a PROFUNDIDADE:\n");
        scanf("%f",&profundidade);
        printf("Informe a VELOCIDADE:\n");
        scanf("%f",&velocidade);

        nota=notaRio(largura,profundidade,velocidade);

        if(nota>=7){
                printf("\n--- NOTA RIO==> %.2f - ALTERNATIVA VIAVEL ---\n",nota);
        }else{
            printf("\n--- NOTA RIO==> %.2f ---\n",nota);
            }

    return 0;
}
