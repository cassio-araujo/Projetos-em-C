#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define Tamanho_Fila 3

int fila[Tamanho_Fila], ultimaPosicao=0;

void enfileirar(int valor)
{
  if(cheia())
  {
    printf(("Fila cheia.\n"));
  }
  else
  {
    fila[ultimaPosicao] = valor;
    ultimaPosicao++;
  }
}

int desinfileirar()
{
  int itemRetirado=0;
  if(vazia())
  {
    printf("Fila vazia.\n");
  }
  else
  {
    itemRetirado = fila[0];
    for(int i=0; i < ultimaPosicao-1; i++)
  {
    fila[i] = fila[i+1];
  }
  ultimaPosicao--;
  }
  return itemRetirado;
}

int vazia()
{
  if(ultimaPosicao ==0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int cheia()
{
  if(ultimaPosicao == Tamanho_Fila)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void exibir()
{
  if(vazia())
  {
    printf("Fila vazia.");
  }
  else
  {
    for(int i=0;i <ultimaPosicao; i++)
    {
      printf("%i\n", fila[i]);
    }
  }

}

void esvaziar()
{
  while(!vazia())
  {
    desinfileirar();
  }
}


