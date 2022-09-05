#include <stdio.h>
main()
{
    int vetor_A[10], vetor_B[10];

    for (int i=0; i <10; i++)
    {
        scanf("%d", &vetor_A[i]);
    }

    for (int i=9; i >=0; i--)
    {
        vetor_B[9 - i] = vetor_A[i];
    }

    for (int i = 0; i <10; i++)
    {
        printf("%d ", vetor_B[i]);
    }
}