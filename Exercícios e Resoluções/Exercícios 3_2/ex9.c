#include <stdio.h>
main()
{
    float n1;

    printf("Insira a temperatura em Fahrenheit:");
    scanf("%f", &n1);
    printf("A temperatura em graus Celsius e: %f\n", 5*((n1-32)/9));
    system("pause");
}