#include <stdio.h>
main ()
{
  int vetor1[5], vetor2[5], resultado[5];

  for (int i=0; i <5; i++)
  {
    printf("Vetor 1 [%d]:", i);
    scanf("%d", &vetor1[i]);
  }

  for (int i=0; i <5; i++)
  {
    printf("Vetor 2 [%d]:", i);
    scanf("%d", &vetor2[i]);
  }

  for (int i=0; i<5; i++)
  {
    resultado[i] = vetor1[i] + vetor2[i];
    printf("Resultado [%d]: %d\n", i, resultado[i]);
  }
  system("pause");
  system("cls");
}