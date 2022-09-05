#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char t1[30];
    char t2[30];
    int comparacao;

    printf("Insira a primeira string:");
    gets(t1);

    printf("Insira a segunda string:");
    gets(t2);

    comparacao = strcmp (t1 , t2);

    if (comparacao == 0)
    {
        printf("Strings iguais.\n");
    }

    else
    {
        strcat(t1,t2);
        printf("%s ", t1);
    }

}
    