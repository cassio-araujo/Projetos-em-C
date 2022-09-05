#include <stdio.h>
main()
{
    float saldo;
    float taxa;

    printf("Insira o saldo da aplicacao:");
    scanf("%f", &saldo);
    printf("Insira a taxa do reajuste em porcentagem:");
    scanf("%f", &taxa);

    printf("Novo saldo: %.2f\n", saldo+(saldo*(taxa/100)));
    system("pause");
    system("cls");
}