#include <stdio.h>
main()
{
    float valor_hora, horas_trabalhadas;
    float salario_bruto, ir, inss, sindicato, salario_liquido;

    printf("Insira o valor ganho por hora:");
    scanf("%f", &valor_hora);
    printf("Horas trabalhadas:");
    scanf("%f", &horas_trabalhadas);

    salario_bruto = valor_hora * horas_trabalhadas;
    ir = salario_bruto * 0.11;
    inss = salario_bruto * 0.08;
    sindicato = salario_bruto * 0.05;
    salario_liquido = salario_bruto - inss- ir - sindicato;

    printf("+ Salario Bruto: %.2f\n", salario_bruto);
    printf("- IR: %.2f\n", ir);
    printf("- Inss: %.2f\n", inss);
    printf("- Sindicato: %.2f\n", sindicato);
    printf("= Salario Liquido: %.2f\n", salario_liquido);
    system("pause");
    system("cls");

}