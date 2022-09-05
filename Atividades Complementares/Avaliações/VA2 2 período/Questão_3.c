#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    int idade, idade_mais_jovem, idade_mais_velho;
    char nome[50], nome_mais_jovem[50], nome_mais_velho[50];

    for (int i = 0; i < 10; i++)
    {
        printf("Nome:\n");
        fflush(stdin);
        gets(nome);

        printf("Idade:\n");
        fflush(stdin);
        scanf("%d", &idade);

        if (i == 0)
        {
            idade_mais_jovem = idade;
            idade_mais_velho = idade;

            strcpy(nome_mais_jovem, nome);
            strcpy(nome_mais_velho, nome);
        }

        if (idade > idade_mais_velho)
        {
            idade_mais_velho = idade;
            strcpy(nome_mais_velho, nome);
        }

        else if (idade < idade_mais_jovem)
        {
            idade_mais_jovem = idade;
            strcpy(nome_mais_jovem, nome);
        }

        if (idade < 0)
        {
            break;
        }
    }

    printf("Mais jovem: %s\n", nome_mais_jovem);
    printf("Idade: %d\n", idade_mais_jovem);

    printf("Mais velho: %s\n", nome_mais_velho);
    printf("Idade: %d\n", idade_mais_velho);
}