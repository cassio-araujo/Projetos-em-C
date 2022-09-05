#include <stdio.h>
main()
{
    int n1;
    int n2;

    printf("Calcular area do quadrado\n");
    printf("Insira a base do quadrado:");
    scanf("%d", &n1);
    printf("Insira a altura do quadrado:");
    scanf("%d", &n2);
    printf("O dobro da area do quadrado e: %d\n",(n1*n2)*2);
    system("pause");

}