#include<stdio.h>

int main(){
    float metragem1=0, metragem2=0, resultado=0;

    int resp;

     do {
        printf("calculo de metros quadrado \n \n ");
        printf("Digite a metragem do 1º terreno:");
        scanf("%f", &metragem1);

        printf("Digeite a metragem do 2º terreno: ");
        scanf("%f", &metragem2);
        resultado = (metragem1 * metragem2);
            printf("\n\n O terreno possui %.2f m2 \n", resultado);

            printf("Digete 1 para continual ou 2 para sair \n");
            scanf("%d", &resp);

     } while (resp == 1);
     
     return 0;

}