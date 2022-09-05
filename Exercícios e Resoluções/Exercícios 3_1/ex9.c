#include <stdio.h>
#include <string.h>
main()
{
    char nome[20];
    char endereco[40];
    char numero[15];

    printf("Insira seu nome:");
    scanf("%s", &nome);
    printf("Insira seu endereco:");
    scanf("%s", &endereco);
    printf("Insira seu numero de telefone:");
    scanf("%s", &numero);

    printf("Seu nome: %s\n", nome);
    printf("Seu endereco: %s\n", endereco);
    printf("Seu telefone: %s\n", numero);
    system("pause");
    system("cls");
}