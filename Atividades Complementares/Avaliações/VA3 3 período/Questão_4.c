#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char letra;
    char texto[20];
    int qtd = 0;

    printf("Insira uma letra:");
    fflush(stdin);
    scanf("%c", &letra);

    printf("Insira um texto:");
    fflush(stdin);
    gets(texto);

    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] == letra)
        {
            qtd++;
        }
    }
    printf("A letra [%c] aparece [%d] vezes no texto.\n", letra, qtd);
}