#include <stdio.h>
main ()
{
    int vetor[5], aux;

    for (int i=0; i <5; i++)
    {
        printf("Preencha o vetor [%d]:", i);
        scanf("%d", &vetor[i]);
    }

    for (int i=0; i<5; i++)
    {
        for (int j = i +1; j <5; j++)
        {
            if (vetor[i] < vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;           
            }
        }
    }
    
    printf("Ordem Decrescente:\n");

    for (int i=0; i <5; i++)
    {
        printf("%d ", vetor[i]);
    }
}
