#include <stdio.h>
main()
{
    char nome[15], tipo;
    int qtd_dias = 0;
    float valor_total = 0;

    printf("Nome:");
    scanf(" %s", &nome);
    
    printf("B - Basico\n");
    printf("I - Intermediario\n");
    printf("A - Avancado\n");
    printf("Tipo de curso:");
    scanf(" %c", &tipo);
    
    printf("Quantidade de dias:");
    scanf(" %d", &qtd_dias);

    if (tipo == 'b' || tipo == 'B')
    {
        valor_total = (qtd_dias * 7.5) * 15;
        printf("Nome: %s \n Valor a pagar: %.2f\n", nome, valor_total);
    }
    else if (tipo == 'i' || tipo == 'I')
    {
        valor_total = (qtd_dias * 8.5) * 20;
        printf("Nome: %s \n Valor a pagar: %.2f\n", nome, valor_total);

    }
    else if(tipo == 'a' || tipo == 'A')
    {
        valor_total = (qtd_dias * 10) * 25;
        printf("Nome: %s \n Valor a pagar: %.2f\n", nome, valor_total);
    }
    else
    {
        printf("Comando invalido\n");
    }
    system("pause");
    system("cls");
  
}