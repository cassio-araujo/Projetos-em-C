#include <stdio.h>
main()
{
    float n1;
    float n2;
    float n3;

    printf("Insira o preco do primeiro produto:");
    scanf("%f", &n1);
    printf("Insira o preco do segundo produto:");
    scanf("%f", &n2);
    printf("Insira o preco do terceiro produto:");
    scanf("%f", &n3);

    if (n1 < n2 && n1 < n3)
    {
        printf("O produto mais barato e o primeiro, custa: %.2f\n", n1);
    }

    else if (n2 < n1 && n2 < n3)
    {
        printf("O produto mais barato e o segundo, custa: %.2f\n", n2);
    }

    else if (n3 < n1 && n3 < n2)
    {
        printf("O produto mais barato e o terceiro, custa: %.2f\n", n3);
    }
    system("pause");
    system("cls");

}