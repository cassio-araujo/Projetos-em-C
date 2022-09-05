#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char t1[30];
    char t1_1[30];
    char t2[30];
    char t2_1[30];
    int comparacao;

    printf("Insira a primeira string:");
    gets(t1);

    for (int i = strlen(t1); i >= 0; i--)
    {
        t1_1[i] = t1[i];
    }

    printf("Insira a primeira string:");
    gets(t2);

    for (int i = strlen(t2); i >= 0; i--)
    {
        t2_1[i] = t2[i];
    }

    comparacao = strncmp(t1_1, t2_1, 2);

    if (comparacao == 0)
    {
        printf("Strings iguais.\n");
    }

    else
    {
        printf("Strings diferentes.\n");
    }
}
