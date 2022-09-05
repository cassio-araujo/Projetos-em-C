#include <stdio.h>
main()
{
    char letra;

    printf("Insira M ou F para definir sexo:");
    scanf("%c", &letra);

    if (letra == 'm')
    {
        printf("Masculino\n");
    }

    else if (letra == 'f')
    {
        printf("Feminino\n");
    }

    else 
    {
        printf("Sexo Invalido\n");
    }
    system("pause");
    system("cls");
    
}