#include <stdio.h>
main()
{
    char resposta;
    int contagem;
    contagem  = 0;

    printf("Responda todas as perguntas com S para Sim e N para Nao:\n");
   
    printf("Telefonou para a vitima?\n");
    scanf(" %c", &resposta);

    if (resposta == 's'){
        contagem = contagem+1;
    }

    printf("Esteve no local do crime?\n");
    scanf(" %c", &resposta);

    if (resposta == 's'){
        contagem = contagem+1;
    }

    printf("Mora perto da vitima?\n");
    scanf(" %c", &resposta);

    if (resposta == 's'){
        contagem = contagem+1;
    }

    printf("Devia para a vitima?\n");
    scanf(" %c", &resposta);

    if (resposta == 's'){
        contagem = contagem+1;
    }

    printf("Ja trabalhou com a vitima?\n");
    scanf(" %c", &resposta);

    if (resposta == 's'){
        contagem = contagem+1;
    }

    if (contagem == 2){
        printf("Suspeita\n");
    }

    else if (contagem == 3 || contagem == 4){
        printf("Possivel cumplice\n");
    }

    else if (contagem == 5){
        printf("Possivel Assassino\n");
    }

    else {
        printf("Inocente\n");
    }
    system("pause");
    system("cls");
   
}