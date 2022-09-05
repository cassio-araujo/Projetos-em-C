#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char texto[100];

    printf("Insira o texto:");
    gets(texto);

    for (int i = strlen(texto); i >= 0; i--)
    {
        printf("%c", texto[i]);
    }
}