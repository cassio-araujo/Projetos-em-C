#include <stdio.h>
main()
{
    int fatorial, numero, sair;

    while (sair != 1)
    {

        printf("Insira um numero:");
        scanf("%d", &numero);
        if (numero > 0 && numero <= 16)
        {

            for (fatorial = 1; numero > 1; numero--)
            {
                fatorial = fatorial * numero;
            }
            printf("Fatorial: %d\n", fatorial);
        }
        printf("Deseja sair?\n 1 - sim \n 2 - nao\n");
        scanf("%d", &sair);
    }
}