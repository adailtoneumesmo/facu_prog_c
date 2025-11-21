#include <stdio.h>

int main (){

    float salario, inss, ir, salario_liquido;

    printf("Calculo do salrio liquido com desconto do IR e INSS \n \n");
    printf("Digite o saldio bruto\n");
    scanf("%f", &salario);
    // Calculo do inss sobre o salario

    if(salario <=1320)
    inss = salario *0.075;
    else if(salario >=1320 && salario <= 2571.29)
    inss = salario *0.09;
    else if(salario >=2571.30 && salario <=3856.94)
    inss = salario *0.12;
    else if (salario >=3856.95 && salario <=7507.49)
    inss = salario *0.14;
    else 
    inss = 1051.04;

    // Calculo do IR sobre o salario

    if (salario <=1903.98)
    ir = salario *0;
    else if(salario >= 1903.99 && salario <=2826.65)
    ir = salario *0.075;
    else if(salario >=2826.66 && salario <=3751.05)
    ir = salario *0.15;
    else if(salario >=3751.06 && salario <=4664.68)
    ir = salario *0.225;
    else if(salario >4664.69)
    ir = salario *0.275;

    //Calculo do salario liquido

    salario_liquido = (salario-inss) -ir;

    // resultado

    printf("\n Desconto do INSS é: %.2f \n \n", inss);
    printf("\n Desconto do importo de renda é: %.2f \n \n ", ir);

    printf("Salario liquido: %.2f \n\n", salario_liquido);

    return 0;

    
}