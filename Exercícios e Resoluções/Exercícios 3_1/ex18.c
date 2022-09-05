#include <stdio.h>
main()
{
    float salario;
    float watt;

    printf("Insira o valor do salario minimo:");
    scanf("%f", &salario);
    printf("Insira a quantidade de quilowatts:");
    scanf("%f", &watt);

    printf("O valor em reais de cada quilowatts: %.2f\n", (salario/7)/100);
    printf("O valor em reais a ser pago: %.2f\n", watt*((salario/7)/100));
    printf("Desconto de 10 porcento: %.2f\n",(watt*((salario/7)/100))-((watt*((salario/7)/100))*0.10));
    system("pause");
    system("cls");
}