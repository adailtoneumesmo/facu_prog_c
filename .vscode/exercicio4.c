  #include <stdio.h>

int main() {

    int tv_2020, tv_2021, tv_2022;
    int noteb_2020, noteb_2021, noteb_2022;
    int smart_2020, smart_2021, smart_2022;

    // TV
    printf("Informe o valor total de venda de TV em 2020: ");
    scanf("%d", &tv_2020);

    printf("Informe o valor total de venda de TV em 2021: ");
    scanf("%d", &tv_2021);

    printf("Informe o valor total de venda de TV em 2022: ");
    scanf("%d", &tv_2022);

    // Notebook
    printf("Informe o valor total de venda de Notebook em 2020: ");
    scanf("%d", &noteb_2020);

    printf("Informe o valor total de venda de Notebook em 2021: ");
    scanf("%d", &noteb_2021);

    printf("Informe o valor total de venda de Notebook em 2022: ");
    scanf("%d", &noteb_2022);

    // Smartphone
    printf("Informe o valor total de venda de Smartphone em 2020: ");
    scanf("%d", &smart_2020);

    printf("Informe o valor total de venda de Smartphone em 2021: ");
    scanf("%d", &smart_2021);

    printf("Informe o valor total de venda de Smartphone em 2022: ");
    scanf("%d", &smart_2022);

    float media_2020;
    float media_2021;
    float media_2022;

    media_2020 = (tv_2020 +noteb_2020+smart_2020)/3;
    media_2021 = (tv_2021+noteb_2021+smart_2021)/3;
    media_2022 = (tv_2022+noteb_2022+smart_2022)/3;

    printf("\n Media vendida de 2020 é: %f" , media_2020);
    printf("\n Media vendida de 2021 é: %f" , media_2021);
    printf("\n Media venddido de 2022 é: %f" , media_2022);

        // Descobrir a maior média
    float maior_media = media_2020;
    int ano_maior = 2020;

    if (media_2021 > maior_media) {
        maior_media = media_2021;
        ano_maior = 2021;
    }

    if (media_2022 > maior_media) {
        maior_media = media_2022;
        ano_maior = 2022;
    }

    // Mostrando o resultado
    printf("\n\nA maior média de vendas foi em %d com valor de: %.2f\n", ano_maior, maior_media);


    return 0;

}