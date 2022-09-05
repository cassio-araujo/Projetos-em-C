#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char texto[100];
    int op;

    printf("*************************************\n");
    printf("* Insira uma Opcao:                 *\n");
    printf("*************************************\n");
    printf("1 - Imprimir vogais                 *\n");
    printf("2 - Imprimir consoantes             *\n");
    printf("3 - Imprimir texto invertido        *\n");
    printf("*************************************\n");
    scanf("%d", &op);

    printf("Insira o texto:");
    fflush(stdin);
    gets(texto);

    switch (op)
    {
    case 1:

        for (int i = 0; i < strlen(texto); i++)
        {
            if (texto[i] == 'a' || texto[i] == 'A' || texto[i] == 'e' || texto[i] == 'E' || texto[i] == 'i' || texto[i] == 'I' || texto[i] == 'o' || texto[i] == 'O' || texto[i] == 'u' || texto[i] == 'U')
            {
                printf("%c", texto[i]);
            }
        }
        break;

    case 2:

        for (int i = 0; i < strlen(texto); i++)
        {
            if (texto[i] != 'a' && texto[i] != 'A' && texto[i] != 'e' && texto[i] != 'E' && texto[i] != 'i' && texto[i] != 'I' && texto[i] != 'o' && texto[i] != 'O' && texto[i] != 'u' && texto[i] != 'U')
            {
                printf("%c", texto[i]);
            }
        }
        break;

    case 3:

        for (int i = strlen(texto); i >= 0; i--)
        {
            printf("%c", texto[i]);
        }
        break;

    default:

        printf("Opcao invalida.");
        break;
    }
}