#include <stdio.h>
main ()
{
    int vetor[10], maior, menor, posicao_maior=0, posicao_menor=0;

    for (int i=0; i<10; i++)
    {
        printf("Preencha o vetor [%d]:", i);
        scanf("%d", &vetor[i]);
    
        if (i == 0)
        {
            maior = vetor[i];
            menor = vetor[i];
        }
        else
        {
            if (maior < vetor[i])
            {
                maior = vetor[i];
                posicao_maior = i;
            }

            if (menor > vetor[i])
            {
                menor = vetor[i];
                posicao_menor = i;
            }
        }
        
    }
    printf("Maior [%d]: %d\n", posicao_maior, maior);
    printf("Menor [%d]: %d\n", posicao_menor, menor);
}