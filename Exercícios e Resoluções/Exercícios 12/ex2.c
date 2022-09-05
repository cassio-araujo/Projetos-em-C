#include <stdio.h>

void qtd_horas(int horas, int minutos, int segundos);

main()
{
    int horas, minutos, segundos;

    printf("Insira a quantidade de horas:");
    scanf("%d", &horas);

    void qtd_horas(int horas, int minutos, int segundos);
}

void qtd_horas(int horas, int minutos, int segundos)
{
    
    minutos = horas * 60;
    segundos = segundos * 60;

    printf("Quantidade de minutos: %d\n", minutos);
    printf("Quantidade de segundos: %d\n", segundos);
}