#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opcao = 0;
    

    while (opcao != 5)
    {
        system("clear");
        printf("MENU PRINCIPAL\n");
        printf("1 - consulta saldo\n");
        printf("2 - fazer recarga\n");
        printf("3 - ver recado\n");
        printf("4 - ultimas ligacoes\n");
        printf("5 - sair\n");
        printf("entre com uma opcao =>");
        scanf("%i", &opcao);
        while (getchar() != '\n')
            ;

        switch (opcao)
        {
        case 1:
        {
            system("clear");
            printf("\x1b[31m==========================\x1b[0m\n");
            printf("\x1b[04mCONSULTA SALDO\x1b[0m\n");
            printf("seu saldo eh de r$ 10.00\n");
            printf("=============================\n\n");
            break;
        }
        case 2:
            printf("escolha um valor de recarga:\n");
            break;
        case 3:
            printf("voce naum tem recados.\n");
            break;
        case 4:
            printf("99999-0000\n99999-1111\n");
            break;
        case 5:
            printf("ate logo!\n");
            break;
        default:
            printf("opcao invalida. tente de novo!\n");
            opcao = 0;
        }

        if (opcao != 5)
        {

            printf("pressione ester para continuar...");
            getchar();
        }
    }

    return 0;
}