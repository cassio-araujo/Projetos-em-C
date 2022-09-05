#include <stdio.h>
main()
{
    float n1;
    float n2;
    float media;

    printf("Insira a primeira nota:");
    scanf("%f", &n1);
    printf("Insira a segunda nota:");
    scanf("%f", &n2);
    media = (n1+n2)/2;

    if (media == 10)
    {
        printf("Aprovado com Distincao\n");
    }

    else if (media >= 7)
    {
        printf("Aprovado\n");
    }

    else 
    {
        printf("Reprovado\n");
    }
    system("pause");
    system("cls");

}