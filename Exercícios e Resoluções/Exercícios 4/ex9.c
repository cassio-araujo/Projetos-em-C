#include <stdio.h>
main()
{
    char letra;

    printf("M - Matutino\n");
    printf("V - Vespertino\n");
    printf("N - Noturno\n");
    printf("Em que turno voce estuda?");
    scanf("%c", &letra);

    if (letra == 'm')
    {
        printf("Bom Dia !\n");
    }
    else if (letra == 'v')
    {
        printf("Boa Tarde !\n");
    }

    else if (letra == 'n')
    {
        printf("Boa Noite !\n");
    }

    else 
    {
        printf("Valor Invalido !\n");
    }

    system("pause");
    system("cls");

}