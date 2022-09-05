#include <stdio.h>
main()
{
    int n1;
    int n2;

    printf("Divisao\n");
    printf("Insira o primeiro numero:");
    scanf("%d", &n1);
    printf("Insira o segundo numero:");
    scanf("%d", &n2);

    printf("Dividendo: %d\n", n1);
    printf("Divisor: %d\n", n2);
    printf("Quociente: %d\n", n1/n2);
    printf("Resto: %d\n", n1%n2);
    system("pause");
    system("cls");
}