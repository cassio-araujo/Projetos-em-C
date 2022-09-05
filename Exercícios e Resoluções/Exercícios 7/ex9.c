#include <stdio.h>
main()
{
    int qtd_nota;
    float nota, nota_total;

    printf("Insira a quantidade de notas:");
    scanf("%d", &qtd_nota);

    for (int i = 1; i <= qtd_nota; i++)
    {
        printf("Insira a nota:");
        scanf("%f", &nota);
        nota_total = nota_total + nota;
    }
    printf("Media aritimetica: %.2f\n", nota_total / qtd_nota);
    system("pause");
    system("cls");
}