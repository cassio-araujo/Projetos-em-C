#include <stdio.h>
#include <string.h>
#include <math.h>

void dias(int anos);
void meses(int anos);

main()
{
    int anos;

    printf("Informe sua idade:");
    scanf("%d", &anos);

    dias(anos);
    meses(anos);
}

void dias(int anos)
{
    printf("Total em dias: %d\n", anos * 365);
}

void meses(int anos)
{
    printf("Total em meses: %d\n", anos * 12);
}
