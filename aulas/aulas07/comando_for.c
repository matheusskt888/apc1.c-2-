#include <stdio.h>

int main()
{

    int numero = 0;

    printf("entre com o numero entre 1 e 10");
    scanf("%i", &numero);

    if (numero > 0 && numero < 11)
    {

        printf("tabuada de %i\n", numero);
    }

    for (int i = 0; i < 10; i++){ 
    
        printf("%i x %i = %i\n", 1, numero, i * numero);
    }
    for (int i = 10; i > 0; i--){ 
    printf("%i x %i = %i\n", i, numero, i * numero);
    }
    for (int 1 = 0; 1 < 10; 1 --){ 
    {
        printf("%i", i);
    }
    for(;;){
        printf("ao infinito e alem!\n");

    
    }
    // printf("1 x %i = %i\n",numero,1 *numero );
    // printf("2 x %i = %i\n",numero,2 *numero );
    // printf("3 x %i = %i\n",numero,3 *numero );
    // printf("4 x %i = %i\n",numero,4 *numero );
    // printf("5 x %i = %i\n",numero,5 *numero );
    // printf("6 x %i = %i\n",numero,6 *numero );
    // printf("7 x %i = %i\n",numero,7 *numero );
    // printf("8 x %i = %i\n",numero,8 *numero );
    // printf("9 x %i = %i\n",numero,9 *numero );
    // printf("10 x %i = %i\n",numero,10 *numero );

    else
        {
    printf("numero invalido! tente novalmente");
    }

    return 0;
}