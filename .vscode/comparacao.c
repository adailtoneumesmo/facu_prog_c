#include <stdio.h>

int main(){
    int n1, n2;

    printf("Digite o primeiro numero");
    scanf("%d", & n1);

    printf("Digite o segundo numero");
    scanf("%d", & n2);
 
    printf("\n n1 e n2 são iguais? %d", n1==n2);

    printf("\n n1 e maior que n2? %d", n1 > n2);

    printf("\n n1 é menor de n2 %d", n1 < n2);

    printf("\n n1 e maior ou igual ou n2 ? %d", n1 >= n2);

    printf("\n n1 é menor ou igual ao n2? %d", n1 <= n2);

    return 0;
}