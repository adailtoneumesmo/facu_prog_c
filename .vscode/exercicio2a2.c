#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d" , &num);

    if(num>0){
        printf("\n \n O numero é positivo \n");
    }

    else {
        printf("O numero é negativo");
    }
    return 0;
}