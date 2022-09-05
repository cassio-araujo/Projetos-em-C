#include <stdio.h>
main()
{
    float n1;
    float n2;

    printf("Insira o primeiro numero:");
    scanf("%f", &n1);
    printf("Insira o segundo numero:");
    scanf("%f", &n2);
    printf("Media: %.2f\n", (n1+n2)/2);
    system("pause");
    system("cls");
}