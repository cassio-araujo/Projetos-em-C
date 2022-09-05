#include <stdio.h>
#include <math.h>
main()
{
    float n1;
    
    system("cls");
    printf("Calcular IMC\n");
    printf("Insira sua altura:");
    scanf("%f", &n1);
    printf("Seu peso ideal e: %.2f\n", (72.7*n1)-58);
    system("pause");
}