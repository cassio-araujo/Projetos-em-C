#include <stdio.h>
main()
{
    float n1;

    printf("Insira a temperatura em graus Celsius:");
    scanf("%f", &n1);
    printf("A temperatura em graus Fahrenheit e: %.2f\n",(n1*9/5)+32);
    system("pause");
}