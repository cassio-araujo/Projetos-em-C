#include <stdio.h>
main()
{
    float kg, kgtotal, valor, valortotal;

    printf("Insira a quantidade em kg de morango:");
    scanf("%f", &kg);
    
    if(kg <= 5){
        valor = kg*2.5;
    }
    else if (kg > 5){
        valor = kg*2.2;
    }

    kgtotal = kg;
    valortotal = valor;

    printf("Insira a quantidade em kg de maca:");
    scanf("%f", &kg);

     if(kg <= 5){
        valor = kg*1.8;
    }
    else if (kg > 5){
        valor = kg*1.5;
    }

    kgtotal = kgtotal + kg;
    valortotal = valortotal + valor;

    if (kgtotal > 8 || valortotal > 25){
        valortotal = valortotal - (valortotal*0.10);
    }

   printf("Valor a ser pago %.2f\n",valortotal);
   system("pause");
   system("cls");

}