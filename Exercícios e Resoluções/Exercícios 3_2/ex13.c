#include <stdio.h>
#include <math.h>
main()
{
    float n1;
    
    system("cls");
    printf("Calcular IMC\n");
    printf("Insira sua altura em metros:");
    scanf("%f", &n1);
    printf("Peso ideal para Homem: %.2f\n", (72.7*n1)-58);
    printf("Peso ideal para Mulher: %.2f\n", (62.1*n1)-44.7);
    system("pause");
}