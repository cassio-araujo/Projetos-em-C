#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char texto_1[50];
    char texto_2[50];
    int op;
    int tamanho_t1;
    int tamanho_t2;

    printf("Insira o primeiro texto:");
    gets(texto_1);

    printf("Insira o segundo texto:");
    gets(texto_2);

    while (op != 0)

    {
        printf("****************************\n");
        printf("* Insira uma Opcao:        *\n");
        printf("****************************\n");
        printf("* 1 - Comparar.            *\n");
        printf("* 2 - Contatenar.          *\n");
        printf("* 0 - Sair.                *\n");
        printf("****************************\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:

            tamanho_t1 = strlen(texto_1);
            tamanho_t2 = strlen(texto_2);

            if (tamanho_t1 > tamanho_t2)
            {
                printf("****************************\n");
                printf("Maior texto: %s\n", texto_1);
            }

            else if (tamanho_t1 < tamanho_t2)
            {
                printf("****************************\n");
                printf("Maior texto: %s\n", texto_2);
            }
            else
            {
                printf("****************************\n");
                printf("Tamanhos iguais.\n");
            }
            break;

        case 2:

            strcat(texto_1, texto_2);
            printf("%s \n", texto_1);
            break;

        case 0:
            break;

        default:
            printf("****************************\n");
            printf("Opcao invalida.\n");
            break;
        }
    }
}
