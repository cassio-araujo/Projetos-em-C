#include <stdio.h>
#include <math.h>
main()
{
    float peso;
    float excesso;

    printf("Insira o peso total dos peixes:");
    scanf("%f", &peso);
    
    excesso = peso -50;

    printf("Total da pesca: %.2f\n", peso);
    printf("Excesso: %.2f\n", excesso);
    printf("Multa: %.2f\n", excesso*4);
    system("pause");
    system("cls");
}