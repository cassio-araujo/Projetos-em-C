#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char texto[100];

    printf("Insira o texto:");
    gets(texto);

    for (int i = 0; i < strlen(texto); i++)
    {
        printf("%c\n", texto[i]);
    }
    system("pause");
    system("cls");
}