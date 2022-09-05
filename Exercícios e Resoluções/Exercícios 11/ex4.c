#include <stdio.h>
#include <string.h>
#include <math.h>

void menu();
void calcular_valor(int op, float valor_gasto);

void menu()
{
    system("cls");
    printf("************************************************\n");
    printf("*         Escolha a forma de pagamento         *\n");
    printf("************************************************\n");
    printf("* 1 - A vista com 10%% de desconto              *\n");
    printf("* 2 - Em duas vezes (preco da etiqueta)        *\n");
    printf("* 3 - De 3 ate 10 vezes com 10%% de juros       *\n");
    printf("************************************************\n");
}

void calcular_valor(int op, float valor_gasto)
{
    int qtd_parcela;

    switch (op)
    {
    case 1:
        printf("Pagamento a vista com desconto: r$ %.2f\n", valor_gasto - (valor_gasto*0.1));
        break;

    case 2:
        printf("Valor total: r$ %.2f\n", valor_gasto);
        printf("2 parcelas no valor de: r$ %.2f\n", valor_gasto / 2);
        break;

    case 3:
        printf("Informe a quantide de parcelas:");
        scanf("%d", &qtd_parcela);
        printf("Valor total: r$ %.2f\n", valor_gasto + (valor_gasto*0.1));
        printf("%d parcelas de: r$ %.2f\n", qtd_parcela, (valor_gasto + (valor_gasto*0.1))/qtd_parcela );
        break;

    default:
        printf("Opcao invalida");
        break;
    }
}

main()
{
    int op;
    float valor_gasto;

    printf("Informe o valor gasto:");
    scanf("%f", &valor_gasto);
    menu();
    scanf("%d", &op);
    calcular_valor(op , valor_gasto);
}
