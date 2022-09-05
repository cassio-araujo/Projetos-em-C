#include <stdio.h>
#include <string.h>
#include <math.h>

void idade();

main()
{
    idade();
}

void idade()
{
    int anos;

    printf("Insira sua idade:");
    scanf("%d", &anos);
    printf("Total em dias: %d\n", anos*365);
}

