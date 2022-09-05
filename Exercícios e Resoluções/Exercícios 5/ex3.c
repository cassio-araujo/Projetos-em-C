#include <stdio.h>
main()
{
    int ano;

    printf("Informe o ano:");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
    {
        printf("%d = bissexto\n", ano);
    }
    else
    {
        printf("%d = Nao bissexto\n", ano);
    }
    system("pause");
    system("cls");
    
}