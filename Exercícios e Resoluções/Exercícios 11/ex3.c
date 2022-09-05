#include <stdio.h>
#include <string.h>
#include <math.h>

void somar();
void subtrair();
void divisao();
void multiplicacao();
void menu();

void menu()
{
    system("cls");
    printf("*****************************\n");
    printf("*     Escolha uma Opcao:    *\n");
    printf("*****************************\n");
    printf("* 1 - Somar                 *\n");
    printf("* 2 - Subtrair              *\n");
    printf("* 3 - Divisao               *\n");
    printf("* 4 - Multiplicacao         *\n");
    printf("* 0 - Sair                  *\n");
    printf("*****************************\n");
}

void somar()
{
    float n1, n2;
    printf("Insira o primeiro numero:");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Insira o segundo numero:");
    fflush(stdin);
    scanf("%f", &n2);
    printf("Resultado: %.2f\n", n1 + n2);
}

void subtrair()
{
    float n1, n2;
    printf("Insira o primeiro numero:");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Insira o segundo numero:");
    fflush(stdin);
    scanf("%f", &n2);
    printf("Resultado: %.2f\n", n1 - n2);
}

void divisao()
{
    float n1, n2;
    printf("Insira o primeiro numero:");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Insira o segundo numero:");
    fflush(stdin);
    scanf("%f", &n2);
    printf("Resultado: %.2f\n", n1 / n2);
}

void multiplicacao()
{
    float n1, n2;
    printf("Insira o primeiro numero:");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Insira o segundo numero:");
    fflush(stdin);
    scanf("%f", &n2);
    printf("Resultado: %.2f\n", n1 * n2);
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
            somar();
            break;
        case 2:
            subtrair();
            break;
        case 3:
            divisao();
            break;
        case 4:
            multiplicacao();
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