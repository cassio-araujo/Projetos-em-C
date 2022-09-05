#include <stdio.h>
main()
{
    int vet1[5], vet2[5];
    
    for (int i = 0; i <5; i++)
    {
        printf("Insira o numero [%d]:", i);
        scanf("%d", &vet1[i]);
        vet2[i] = vet1[i];
    }
     
     for (int i = 0; i <5; i++)
    {
        printf("Numero [%d]: %d\n", i, vet2[i]);
    }
    system("pause");
    system("cls");
}