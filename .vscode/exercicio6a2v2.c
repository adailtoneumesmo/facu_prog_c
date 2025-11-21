#include <stdio.h>

int main (){

    int multiplicado = 0, resultado, num;

    printf("Indique o numero para mostrar sua tabiada: ");
    scanf("%d", & num);

    while (multiplicado <= 10)
    {
        resultado = num * multiplicado;
        printf("%d \n", resultado);

        multiplicado = multiplicado +1;
    }
    
    return 0;

}