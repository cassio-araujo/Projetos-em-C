#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char texto_1[10];
    char texto_2[10];
    int comparacao;
    int tamanho_t1;
    int tamanho_t2;

    printf("Insira o primeiro texto:");
    gets(texto_1);

    printf("Insira o segundo texto:");
    gets(texto_2);

    comparacao = strcmp(texto_1, texto_2);

    if (comparacao == 0)
    {
        printf("Textos iguais\n");
    }

    else
    {
        tamanho_t1 = strlen(texto_1);
        tamanho_t2 = strlen(texto_2);

        if (tamanho_t1 > tamanho_t2)
        {
            printf("Maior texto: %s", texto_1);
        }

        else if (tamanho_t1 < tamanho_t2)
        {
            printf("Maior texto: %s", texto_2);
        }
        else
        {
            printf("Textos diferentes, tamanhos iguais.");
        }
    }
}