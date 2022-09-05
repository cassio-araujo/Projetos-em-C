#include <stdio.h>
main()
{
    float x, y;

    printf("Informe o valor de X:");
    scanf("%f", &x);

    printf("Informe o valor de Y:");
    scanf("%f", &y);

    if (x == y)
    {
        printf("Podem ser dimensoes de um quadrado\n");
    }
    else
    {
        printf("Nao podem ser dimensoes de um quadrado\n");
    }
    system("pause");
    system("cls");
}