#include "stack.h"

/*Função para criar uma pilha vazia (não criar nenhum nó, só devolver NULL)!*/
Stack *create_stack()
{
   /*TERMINAR!!*/
   return NULL;
}

/*Função para liberar uma pilha nó por nó*/
void free_stack(Stack *s)
{
   /*TERMINAR!!*/
   Stack *aux;
   while (s != NULL)
   {
      aux = s->next;
      free(s);
      s = aux;
   }
}

/*Função para empilhar um elemento (inserir na cabeça da lista encadeada)!*/
Stack *push(Stack *s, int elem)
{
   /*TERMINAR!!*/
   Stack *novo = (Stack *)malloc(sizeof(Stack));
   novo->info = elem;
   novo->next = s;
   //printf("%c \n",novo->info);
   return novo;
}

/*Função para desempilhar um elemento (remover da cabeça da lista encadeada)!*/
Stack *pop(Stack *s)
{
   Stack *aux = s;
   if(empty_stack(s)){
      printf("Pilha vazia!");
      exit(1);
   }
   s = aux->next;
   free(aux);
   return s;
}

/*Função para retornar o elemento no topo da pilha (cabeça da lista encadeada) sem desempilhar!*/
int top(Stack *s)
{
    //printf("%c \n",s->info);
   return s->info;
}

/*Função para testar se uma pilha está vazia!*/
int empty_stack(Stack *s)
{
   /*TERMINAR!!*/
  
   return s == NULL;
}
