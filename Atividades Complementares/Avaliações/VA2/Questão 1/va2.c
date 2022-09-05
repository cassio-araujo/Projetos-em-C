#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Registro
{
  int codigo;
  char nome_disciplina[50], status_curso;
  float nota;
  struct Registro *proximo;
} Registro;

//Declaração dos Ponteiros
Registro *p = NULL, *aux, *ultimo;
int i;

void status(Registro *aux)
{
  while (aux != NULL)
  {
    if (aux->nota >= 60)
    {
      aux->status_curso = 'A';
    }
    else
    {
      aux->status_curso = 'R';
    }
    aux = aux->proximo;
  }
}

void calcular(Registro *aux)
{

  float soma, media, cont = 0;
  while (aux != NULL)
  {

    soma = soma + aux->nota;
    cont++;
    aux = aux->proximo;
  }

  media = soma / cont;

  printf("Media: %.2f\n", media);

  system("pause");
}

void atualizar(Registro *aux)
{
  int buscaAtualizar, i;

  printf("*****************************************************\n");
  printf("Insira codigo da disciplina que deseja alterar:");
  scanf("%i", &buscaAtualizar);
  fflush(stdin);
  printf("*****************************************************\n");

  while (aux != NULL)
  {

    if (buscaAtualizar == aux->codigo)
    {

      printf("Insira o nome da disciplina: ");
      fflush(stdin);
      scanf("%s", aux->nome_disciplina);

      printf("Insira a nota: ");
      fflush(stdin);
      scanf("%f", &aux->nota);

      break;
    }
    aux = aux->proximo;
  }

  system("pause");
}

void listar(Registro *aux)
{

  while (aux != NULL)
  {

    printf("Codigo: %i\n", aux->codigo);
    printf("Nome disciplina: %s\n", aux->nome_disciplina);
    printf("Nota: %.2f\n", aux->nota);
    printf("Status: %c\n", aux->status_curso);
    printf("\n");

    aux = aux->proximo;
  }
  aux = p;

  system("pause");
}

void cadastrar()
{
  int op;
  do
  {
    aux = malloc(sizeof(Registro));

    printf("Insira o codigo: ");
    fflush(stdin);
    scanf("%i", &aux->codigo);

    printf("Insira o nome da disciplina: ");
    fflush(stdin);
    scanf("%s", aux->nome_disciplina);

    printf("Insira a nota: ");
    fflush(stdin);
    scanf("%f", &aux->nota);

    printf("Status: Cursando\n");
    aux->status_curso = 'C';
    printf("\n");

    aux->proximo = NULL;

    if (p == NULL)
    {
      p = aux;
      ultimo = aux;
    }
    else
    {
      ultimo->proximo = aux;
      ultimo = aux;
    }
    printf("Deseja cadastrar outra disciplina?\n");
    printf("1-Sim | 0-Nao\n");
    scanf("%i", &op);
    printf("\n");

  } while (op > 0);
}

void menu()

{
  int op;
  while (op > 0)
  {
    printf("*****************************************************\n");
    printf("* 1 - CADASTRAR                                     *\n");
    printf("* 2 - LISTAR                                        *\n");
    printf("* 3 - ATUALIZAR                                     *\n");
    printf("* 4 - CALCULAR                                      *\n");
    printf("* 5 - STATUS                                        *\n");
    printf("* 0 - SAIR                                          *\n");
    printf("*****************************************************\n");

    scanf("%d", &op);

    switch (op)
    {
    case 1:
      cadastrar();
      break;
    case 2:
      listar(p);
      break;
    case 3:
      atualizar(p);
      break;
    case 4:
      calcular(p);
      break;
    case 5:
      status(p);
      listar(p);
      break;
    case 0:
      return 0;
      break;
    }
  }
}

int main()
{
  menu();
}