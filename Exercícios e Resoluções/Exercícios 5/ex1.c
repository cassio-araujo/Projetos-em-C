#include <stdio.h>
main()
{
    int anos, meses, dias, diastotal;

    printf("Insira a quantidade de anos:");
    scanf("%d", &anos);
    
    printf("Insira a quantidade de meses:");
    scanf("%d", &meses);
    
    printf("Insira a quantidade de dias:");
    scanf("%d", &dias);

    diastotal = dias + (anos*365) + (meses*30);

    printf("%d anos, %d meses e %d dias = %d dias\n", anos, meses, dias, diastotal);
    system("pause");
    system("cls");

}