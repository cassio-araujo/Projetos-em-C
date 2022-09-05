#include <stdio.h>
main()
{
    int numero, divisor = 0;

    printf("Insira um numero:");
    scanf("%d", &numero);

    for (int i = numero; i > 0; i--)
    {
        if (numero % i == 0)
        {
            divisor++;
        }
    }

    if (divisor == 2)
    {
        printf("Numero primo.\n");
    }

    else
    {
        printf("Nao e primo.\n");
    }
    system("pause");
    system("cls");
}