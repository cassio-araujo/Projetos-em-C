#include <stdio.h>
main()
{
    int contador, n;

    printf("Insira um numero:");
    scanf("%d", &n);

    for (contador = 1; contador <= n; contador = contador + 1)
    {
        printf("Numero %d\n", contador);
    }
    system("pause");
    system("cls");
}