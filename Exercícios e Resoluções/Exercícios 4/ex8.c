#include<stdio.h>
main()
{
  int n1, n2, n3;
  
  printf("Insira o primeiro numero:");
  scanf("%d", &n1);

  printf("Insira o segundo numero:");
  scanf("%d", &n2);

  printf("Insira o terceiro numero:");
  scanf("%d", &n3);

 if (n1 >= n2 && n1 >= n3 && n2 >= n3)
 {
   printf("Ordem decrescente: %d %d %d\n", n1, n2, n3);
 }

 if (n1 >= n2 && n1 >= n3 && n3 >= n2)
 {
   printf("Ordem decrescente: %d %d %d\n", n1, n3, n2);
 }

  if (n2 >= n1 && n2 >= n3 && n1 >= n3)
 {
   printf("Ordem decrescente: %d %d %d\n", n2, n1, n3);
 }

 if (n2 >= n1 && n2 >= n3 && n3 >= n1)
 {
   printf("Ordem decrescente: %d %d %d\n", n2, n3, n1);
 }
 
 if (n3 >= n1 && n3 >= n2 && n1 >= n2)
 {
  printf("Ordem decrescente: %d %d %d\n", n3, n1, n2);
 }

 if (n3 >= n1 && n3 >= n2 && n2 >= n1)
 {
    printf("Ordem decrescente: %d %d %d\n", n3, n2, n1);
 }
 system("pause");
 system("cls");

}