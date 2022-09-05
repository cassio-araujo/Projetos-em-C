#include <stdio.h>
main ()
{
    int n1;
    int n2;
    int n3;
    int n4;
    
    printf("Insira a primeira nota:");
    scanf("%d:", &n1);
    printf("Insira a segunda nota:");
    scanf("%d:", &n2);
    printf("Insira a terceira nota:");
    scanf("%d:", &n3);
    printf("Insira a quarta nota:");
    scanf("%d:", &n4);
    printf("A media das notas inseridas e: %d\n", (n1+n2+n3+n4)/4);
    system("pause");
}