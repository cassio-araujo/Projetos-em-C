#include <stdio.h>
main()
{
    int vetor1[2], vetor2[2], vetor3[4];

     for (int i=0; i <2; i++)
    {
        printf("Vetor 1 [%d]:", i);
        scanf("%d", &vetor1[i]);
    }

     for (int i=0; i <2; i++)
    {
        printf("Vetor 2 [%d]:", i);
        scanf("%d", &vetor2[i]);
    }
    for (int i=0; i <2; i++)
    {
        vetor3[i] = vetor1[i];
    }

    for (int i=2; i <4; i++)
    {
        vetor3[i] = vetor2[i - 2];
    }

    for (int i=0; i <4; i++)
    {
        printf("Vetor 3 [%d]: %d\n", i, vetor3[i]);
    }

    
}