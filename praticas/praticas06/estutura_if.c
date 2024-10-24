#include <stdio.h>

int main()
{

    // int numero = 0;

    // int idade = 16;

    // printf("digite um numero inteiro:");
    // int deu_certo = scanf("%i", &numero);

    // int numero_eh_divisivel_por_2 = numero % 2 == 0;

    // if (numero_eh_divisivel_por_2)
    // {
    //     printf("O numero %i eh par!\n", numero);
    // }
    // else
    // {
    //     printf("o numero %i eh impar!\n", numero);
    // }
    // printf("digite sua idade : ");
    // scanf("%i", &idade);

    // if (idade < 16)
    // {
    //     printf("voce naum pode votar!\n");
    // }
    // else
    // {

    //     if (idade < 18 || idade > 70)
    //     {

    //         printf(" voce pode vatar!\n");
    //     }
    //     else
    //     {
    //         printf("voce e obrigado a votar!\n");
    //     }
    // }

    int media = 0;

    printf("digit sua media final: ");
    scanf("%i", &media);

    if (media < 3.0f)
    {
        printf("a mencao eh 'sr' .\n");
    }
    else if (media < 3.0)
    {
        printf("a mencao eh 'ii'.\n");
    }
    else if (media < 5.0)
    {
        printf(" a mencao eh 'mi'.\n");
    }
    else if (media < 7.0)
    {

        printf(" a mencao eh 'mm'.\n");
    }
    else if (media < 9.0)
    {

        printf(" a mencao eh 'ms'.\n");
    
    }
    else
    {

        printf(" a mencao eh 'ss'.\n");
    }

    return 0;
}