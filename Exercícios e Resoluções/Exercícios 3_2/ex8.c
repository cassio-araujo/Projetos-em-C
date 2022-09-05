#include <stdio.h>
main()
{ 
    float n1;
    float n2;

    printf("Quanto voce ganha por hora:");
    scanf("%f", &n1);
    printf(" Quantas horas voce trabalha por mes:");
    scanf("%f", &n2);
    printf("Seu salario mensal e: %.2f reais\n", n2*n1);
    system("pause");

}