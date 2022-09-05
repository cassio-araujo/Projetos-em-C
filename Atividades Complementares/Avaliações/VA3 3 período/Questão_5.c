#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char string[20];
    char letra, a, g, u;

    printf("Insira 20 caracteres:\n");
    
    for (int i = 0; i <20; i++)
    {
        fflush(stdin);
        scanf("%c", &letra);
        string[i] = letra;
    }

    
    for (int i=0; i<strlen(string); i++)
    {
        if (string[i]=='a')
        {
            a++;
        }

        if (string[i]=='g')
        {
            g++;
        }

         if (string[i]=='u')
        {
            u++;
        }
    }

    if (a>=2 && g>=1 && u>=1)
    {
        printf("E possivel escrever a palavra AGUA com os caracteres lidos.");
    }

    else
    {
        printf("Nao e possivel escrever a palavra AGUA com os caracteres lidos.");
    }
    
}