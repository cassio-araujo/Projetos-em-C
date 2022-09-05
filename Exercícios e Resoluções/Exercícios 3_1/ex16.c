#include <stdio.h>
#include <math.h>
main()
{
    float n1;

    printf("Insira um numero:");
    scanf("%f", &n1);
    printf("Numero: %.2f\n", n1);
    printf("Quadrado: %.2f\n", pow (n1,2));
    printf("Raiz quadrada: %.2f\n", sqrt (n1));
    system("pause");
    system("cls");
}