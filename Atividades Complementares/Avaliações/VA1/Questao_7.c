#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definindo função
typedef struct Pessoa
{
    float peso, altura;
    char nome[50];
} Pessoa;

//Função que recebe os valores para calcular IMC
float calcular(float peso, float altura)
{

    float imc;
    imc = (peso / (altura * altura));

    return imc;
}

//Raiz do código, lê os dados e envia para função calcular
int main()
{
    Pessoa cadastro;

    printf("Insira seu nome: ");
    gets(cadastro.nome);

    printf("Insira sua altura em metros: ");
    scanf("%f", &cadastro.altura);

    printf("Insira seu peso em Kg: ");
    scanf("%f", &cadastro.peso);

    //Exibindo os dados
    printf("Nome: %s\n", cadastro.nome);
    printf("Seu IMC: %f", calcular(cadastro.peso, cadastro.altura));
}