#include <stdio.h>
main()
{
    int capacidade, p1, p2, p3, p4, p5, pesototal;

    printf("Informe a capacidade:");
    scanf(" %d", &capacidade);

    printf("Informe o Peso 1:");
    scanf(" %d", &p1);

    printf("Informe o Peso 2:");
    scanf(" %d", &p2);

    printf("Informe o Peso 3:");
    scanf(" %d", &p3);

    printf("Informe o Peso 4:");
    scanf(" %d", &p4);

    printf("Informe o Peso 5:");
    scanf(" %d", &p5);

    pesototal = p1 + p2 + p3 + p4 + p5;

    if (pesototal > capacidade)
    {
        printf("Excedeu a carga maxima\n");
    }
    else
    {
        printf("Liberado\n");
    }
    system("pause");
    system("cls");
    
}