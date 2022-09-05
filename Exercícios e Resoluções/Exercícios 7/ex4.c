#include <stdio.h>
main()
{
    int contador;

    for (contador = 1000; contador >= 1; contador = contador - 1)
    {
        printf("Numero %d\n", contador);
    }
    system("pause");
    system("cls");
}