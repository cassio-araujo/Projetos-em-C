#include <stdio.h>
#include <math.h>
main()
{
    int n1;
    int n2;
    float n3;

    printf("Insira um numero inteiro:");
    scanf("%d", &n1);
    printf("Insira outro numero inteiro:");
    scanf("%d", &n2);
    printf("Insira um numero real:");
    scanf("%f", &n3);
    printf("O produto do dobro do primeiro com metade do segundo: %d\n", (n1*2)*(n2/2));
    printf("A soma do triplo do primeiro com o terceiro: %.2f\n", (pow(n1,3)) + n3);
    printf("Terceiro elevado ao cubo: %.2f\n", n3*n3*n3); 
    system("pause");
}