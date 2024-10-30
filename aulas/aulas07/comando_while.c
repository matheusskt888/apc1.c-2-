#include <stdio.h>

int main()
{

    int numero = 0;

    printf("entre com um numero entre 1 e 10: ");
    scanf("%i", &numero);

    while (numero < 1 || numero > 10)
    {
        while (getchar() != '\n');
             // linpar buffer do teclado
        printf("numero invalido. tente novamente!\n");
        printf("entre com um nomero entre 1 e 10: ");
        scanf("%i", &numero);
    }

    return 0;
}