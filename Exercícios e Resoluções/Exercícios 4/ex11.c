#include <stdio.h>
main()
{
    float n1,n2,n3,media;

    printf("Insira a primeira nota:");
    scanf("%f",&n1);
    printf("Insira a segunda nota:");
    scanf("%f",&n2);
    printf("Insira a terceira nota:");
    scanf("%f",&n3);

    media = (n1+n2+n3)/3;

    if (media == 10){
        printf("Aprovado com Distincao\n");
    }
    else if (media >= 7 && media < 10){
        printf("Aprovado\n");
    }
    else if (media < 7){
        printf("Reprovado\n");
    }
    system("pause");
    system("cls");
}