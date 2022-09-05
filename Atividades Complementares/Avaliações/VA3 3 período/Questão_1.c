#include <stdio.h>
main()
{
    int watts;

    printf("Insira a quantidade de Watts:");
    scanf("%d", &watts);

    printf("Watts para Kilowatts: %d\n", watts / 1000);
}