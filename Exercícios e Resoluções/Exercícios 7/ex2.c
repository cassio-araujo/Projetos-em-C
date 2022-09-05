#include <stdio.h>
main()
{
    int contador;

    for (contador = 1; contador <= 1000; contador = contador + 1)
    {
        if (contador % 2 == 0)
        {
            printf("Numero Pares %d\n", contador);
        }
    }
    system("pause");
    system("cls");
}