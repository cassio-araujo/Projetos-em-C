#include <stdio.h>
main()
{
    float n1;
    float n2;
    float n3;

    printf("Insira o primeiro numero:");
    scanf("%f", &n1);
    printf("Insira o segundo numero:");
    scanf("%f", &n2);
    printf("Insira o terceiro numero:");
    scanf("%f", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("Maior numero: %.2f\n", n1);
    }

    else if (n2 > n1 && n2 > n3)
    {
        printf("Maior numero: %.2f\n", n2);
    }

    else if (n3 > n1 && n3 > n2)
    {
        printf("Maior numero: %.2f\n", n3);
    }
    system("pause");
    system("cls");

}