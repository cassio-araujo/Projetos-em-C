#include <stdio.h>
#include <string.h>
#include <math.h>

void decimetros();
void centimetros();
void milimetros();
void menu();

void menu()
{
    system("cls");
    printf("*****************************\n");
    printf("*     Escolha uma Opcao:    *\n");
    printf("*****************************\n");
    printf("* 1 - Decimetros            *\n");
    printf("* 2 - Centimetros           *\n");
    printf("* 3 - Milimetros            *\n");
    printf("* 0 - Sair                  *\n");
    printf("*****************************\n");
}

void decimetros()
{
    float n1;
    fflush(stdin);
    printf("Insira o valor em metros:");
    scanf("%f", &n1);
    printf("Valor decimetros: %.2f\n", n1 * 10);
}

void centimetros()
{
    float n1;
    fflush(stdin);
    printf("Insira o valor em metros:");
    scanf("%f", &n1);
    printf("Valor centimetros: %.2f\n", n1 * 100);
}

void milimetros()
{
    float n1;
    fflush(stdin);
    printf("Insira o valor em metros:");
    scanf("%f", &n1);
    printf("Valor milimetros: %.2f\n", n1 * 1000);
}

main()
{
    int op;

    while (op != 0)
    {
        menu();
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            decimetros();
            break;
        case 2:
            centimetros();
            break;
        case 3:
            milimetros();
            break;

        case 0:
            break;

        default:
            printf("Opcao Invalida\n");
            break;
        }
        printf("Pressione uma tecla para continuar");
        getch();
    }
}
