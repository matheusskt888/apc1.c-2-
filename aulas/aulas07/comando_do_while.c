#include <stdio.h>

int main()
{
    int numero = 0;

    do
    {

        printf("entre com numero entre 1 e 10");
        scanf("%i", &numero);

        if (numero < 1 || numero > 10)
        {

            printf("numero invalido. tente novamente!\n");
        }
    } while (numero < 1 || numero > 10);

    return 0;
}