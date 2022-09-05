#include <stdio.h>
main()
{
    float n1;
    float n2;
    float n3;

    printf("Calcular a media aritmetica entre tres numeros\n");
    printf("Insira o primeiro numero:");
    scanf("%f", &n1);
    printf("Insira o segundo numero:");
    scanf("%f", &n2);
    printf("Insira o terceiro numero:");
    scanf("%f", &n3);
    printf("A media aritmetica e: %.2f\n", (n1+n2+n3)/3);
    system("pause");
    system("cls");
    
}