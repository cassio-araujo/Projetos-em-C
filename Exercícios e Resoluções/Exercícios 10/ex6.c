#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char texto[50];
    int qtd=0;

    printf("Insira o texto:");
    gets(texto);

    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] == 'a' || texto[i] == 'A' || texto[i] == 'e' || texto[i] == 'E' || texto[i] == 'i' || texto[i] == 'I' || texto[i] == 'o' || texto[i] == 'O' || texto[i] == 'u' || texto[i] == 'U')
        {
            qtd++;
        }
    }
    printf("Foram encontradas %d vogais.\n", qtd);
}