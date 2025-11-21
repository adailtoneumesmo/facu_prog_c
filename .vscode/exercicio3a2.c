#include<stdio.h>

int main(){

    int num =100000;

    if (num <100)
    printf("Numero é menor que 100");

    else if(num < 1000)
    printf("Numero é menor que 1000");

    else if(num < 10000)
    printf("Numero é menor que 10000");

    else
    printf("Maior ou igual a 10000");

    return 0;
}