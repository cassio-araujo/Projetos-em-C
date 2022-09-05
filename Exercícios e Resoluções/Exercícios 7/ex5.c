#include <stdio.h>
main()
{
    int fatorial, numero;

    printf("Insira um numero:");
    scanf("%d", &numero);

    for (fatorial = 1; numero > 1; numero--)
    {
        fatorial = fatorial * numero;
    }
    printf("Fatorial: %d\n", fatorial);

    system("pause");
    system("cls");
}