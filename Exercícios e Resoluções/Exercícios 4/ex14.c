#include <stdio.h>
main()
{
    float litro, valor;
    char tipo;

    printf("Insira a quantidade em litros de combustivel:");
    scanf("%f", &litro);
    printf("A - Alcool\n");
    printf("G - Gasolina\n");
    printf("Qual foi o tipo de combustivel:\n");
    scanf(" %c", &tipo);

    if (tipo == 'a' && litro <= 20){
        valor = 1.9*litro;
        printf("Total a pagar: %.2f\n", valor-(valor*0.03));
    }
      else if (tipo == 'a' && litro > 20){
        valor = 1.9*litro;
        printf("Total a pagar: %.2f\n", valor-(valor*0.05));
    }

    if (tipo == 'g' && litro <= 20){
        valor = 2.5*litro;
        printf("Total a pagar: %.2f\n", valor-(valor*0.04));
    }
      else if (tipo == 'g' && litro > 20){
        valor = 2.5*litro;
        printf("Total a pagar: %.2f\n", valor-(valor*0.06));
    }
    system("pause");
    system("cls");

    
}