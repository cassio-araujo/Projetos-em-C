#include <stdio.h>
main()
{
    float n1;
    float n2;
    float n3;
    float n4;

    printf("calcular a media ponderada de quatro numeros\n");
    printf("Insira o primeiro numero:");
    scanf("%f", &n1);
    printf("Insira o segundo numero:");
    scanf("%f", &n2);
    printf("Insira o terceiro numero:");
    scanf("%f", &n3);
    printf("Insira o quarto numero:");
    scanf("%f", &n4);

    printf("A media ponderada de 4 pesos e: %.2f\n", ((n1*1)+(n2*2)+(n3*3)+(n4*4))/(1+2+3+4));
    system("pause");
    system("cls");



}