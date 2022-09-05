#include <stdio.h>
main()
{
    int primeiro, segundo, terceiro, total_eleitores, voto, sair;

    while (sair != 0)
    {
        primeiro = 0;
        segundo = 0;
        terceiro = 0;

        printf("Insira a quantidade de eleitores:");
        scanf("%d", &total_eleitores);

        for (int i = 0; i < total_eleitores; i++)
        {
            printf("------------------------------------\n");
            printf("Escolha seu candidato:\n");
            printf("1 - Primeiro Candidato\n");
            printf("2 - Segundo Candidato\n");
            printf("3 - Terceiro Candidato\n");
            scanf("%d", &voto);

            switch (voto)
            {
            case 1:
                primeiro++;
                break;
            case 2:
                segundo++;
                break;
            case 3:
                terceiro++;
                break;

            default:
                printf("Candidato Invalido.");
                break;
            }
        }
        printf("------------------------------------\n");
        printf("Resultado:\n");
        printf("Primeiro Candidato: %d\n", primeiro);
        printf("Segundo Candidato: %d\n", segundo);
        printf("Terceiro Candidato: %d\n", terceiro);
        printf("------------------------------------\n");

        printf("Deseja Sair?\n 0 - sim \n 1 - nao\n");
        scanf("%d", &sair);
    }
    system("pause");
    system("cls");
}