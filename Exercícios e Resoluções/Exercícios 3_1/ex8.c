#include <stdio.h>
main()
{
    int n1;

    printf("Insira um numero:");
    scanf("%d", &n1);
    printf("Seu sucessor e: %d\n", n1+1);
    printf("Seu antecessor e: %d\n", n1-1);
    system("pause");
}