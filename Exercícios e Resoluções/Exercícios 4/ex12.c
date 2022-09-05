#include <stdio.h>
main()
{
    int n1;

    printf("Insira um numero inteiro:");
    scanf("%d", &n1);

    if ((n1 % 2) == 0)
    {
        printf("O numero inserido e Par\n");
    }
    else
    {
        printf("O numero inserido e Impar\n");
    }
    system("pause");
    system("cls");
}