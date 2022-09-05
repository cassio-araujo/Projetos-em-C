#include <stdio.h>
main()
{
    float n1;
    float n2;
    float nota;

    printf("Insira a primeira nota:");
    scanf("%f", &n1);
    printf("Insira a segunda nota:");
    scanf("%f", &n2);
    
    nota = (n1+n2)/2;

    if (nota > 9 && nota <= 10){
        printf("Conceito: A\n");
    }
    if (nota > 7.5 && nota <= 9){
        printf("Conceito: B\n");
    }
    if (nota > 6 && nota <= 7.5){
        printf("Conceito: C\n");
    }
    if (nota > 4 && nota <= 6){
        printf("Conceito: D\n");
    }
    if (nota > 0 && nota <= 4){
        printf("Conceito: E\n");
    }
    system("pause");
    system("cls");
   
}