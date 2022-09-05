#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define Tamanho_Pilha 3

int pilha[Tamanho_Pilha], topo=0;

void empilhar(int valor)
{
  if(cheia())
  {
    printf("Pilha Cheia.\n");
  }
  else
  {
  pilha[topo] = valor;
  topo++;
  }
}

int desempilhar()
{
  if(vazia())
  {
    printf("Pilha vazia.\n");
  }
  else
  {
    topo--;
    return pilha[topo];
  }
  return 0;
}

int vazia()
{
  if(topo == 0)
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
  if (topo == Tamanho_Pilha)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void esvaziar()
{
  while(!vazia())
  {
    desempilhar();
  }
}



void exibir()
{
  
  if(vazia())
  {
    printf("Pilha vazia\n");
  }
  else
  {
    for(int i=0; i<topo; i++)
    {
    printf("%i\n", pilha[i]);
    }
  }
}