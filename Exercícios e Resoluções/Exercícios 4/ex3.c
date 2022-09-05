#include <stdio.h>
main()
{
    char letra;

    printf("Insira uma letra:");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra =='u')
    {
        printf("Letra inserida e uma vogal\n");
    }
     else
     {
         printf("Letra inserida e uma consoante\n");
     }
     system("pause");
     system("cls");
     
}