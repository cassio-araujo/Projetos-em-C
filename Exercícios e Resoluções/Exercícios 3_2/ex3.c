#include <stdio.h>
main ()
{
    int n1;
    int n2;
    
    printf("Insira um numero:");
    scanf("%d:", &n1);
    printf("Insira outro numero:");
    scanf("%d:", &n2);
    printf("A soma dos numeros e: %d\n", n1 + n2);
    system("pause");
}