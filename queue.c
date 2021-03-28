#include "Queue.h"

/*Função para criar uma lista encadeada vazia!*/
Queue* create_queue (void) {
   return NULL;
}

/*Função para inserir um elemento na cabeça de uma lista encadeada!*/
Queue* enqueue (Queue *lista, int elem) {
   Queue *novo =(Queue*)malloc(sizeof(Queue));
   novo->info = elem;
   novo->next = lista;
   return novo;
}

/*Função para imprimir uma lista encadeada!*/
void imprimir (Queue *lista) {
   Queue *v; /*var. para percorrer a lista*/
   for (v = lista; v != NULL; v = v->next) {
      printf("Valor: %d\n", v->info);
   }
}

/*Função para remover um elemento da lista encadeada em qq posição!*/
Queue *dequeue (Queue *l) {
   Queue *aux = l; 
   Queue *prev = NULL;

   while(aux != NULL && aux->next != NULL){
       prev = aux;
       aux = aux ->next;
       //printf("huu\n");
   }
   if(aux == NULL){
      return l;
   }else if(prev == NULL){
      l = l->next;
   }else{
      prev->next = aux->next;
   }
   free(aux);
   return l;
}

/*Função para desalocar uma lista encadeda!*/
void free_queue(Queue *l) {
  Queue *aux;
  while (l != NULL) {
    aux = l->next;
    free(l);
    l = aux;
  }
}
int empty_queue (Queue *q){
   return q == NULL;
}


int front (Queue *q){
   Queue *prev = NULL,*aux = q; 
   
   while( aux != NULL){
       prev = aux;
       aux = aux->next;
   }
  
   return prev->info;
}