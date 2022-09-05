#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char texto1[40], texto2[40];
    int op;
    int comparacao;

    do
    {
        system("cls");

        printf("Insira a primeira string:");
        fflush(stdin);
        gets(texto1);

        printf("Insira a segunda string:");
        fflush(stdin);
        gets(texto2);

        system("cls");

        printf("****************************\n");
        printf("* Insira uma Opcao:        *\n");
        printf("****************************\n");
        printf("* 1 - Comparar             *\n");
        printf("* 2 - Contatenar           *\n");
        printf("* 0 - Sair                 *\n");
        printf("****************************\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            comparacao = strcmp(texto1, texto2);

            if (comparacao == 0)
            {
                printf("Strings iguais.\n");
            }

            else
            {
                printf("Strings diferentes.\n");
            }
            break;

        case 2:
            strcat(texto1, texto2);
            printf("Texto contatenado: %s\n", texto1);
            break;

        case 0:
            break;

        default:
            printf("Opcao invalida.\n");
            break;
        }
        printf("Pressione uma tecla para continuar");
        getch();

    } while (op != 0);
}