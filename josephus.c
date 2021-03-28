#include "queue.h"

int main () {
  int i, m, n;
  printf("Josephus - digite o passo da morte e numero de competidores: ");
  scanf("%d %d", &m, &n);
  Queue *q = create_queue();
  // fifo // lifo
  
  // q = enqueue(q,1); // 1 - null
  // q = enqueue(q,2); // 2 - 1
  // q = enqueue(q,3); // 3 - 2
  // q = enqueue(q,4); // 4 - 3 
  
  // imprimir(q);      // 4 - 3 - 2 - 1 - NULL
  // printf("_____________\n");
  // q = dequeue(q);
  // imprimir(q);
  // printf("\n%d\n",front(q));
  // free_queue(q);



  for (i = 1; i <= n; i++) {
    q = enqueue (q, i);
  }
  i = 1;
  while (!empty_queue(q)) {
    int e = front(q);
     q = dequeue(q);
    if (empty_queue(q)){
      printf(", sobrevivente: %d\n", e);
    }
    else if ((i % m) == 0) {
      printf("%d ", e);
    }
    else {
      q = enqueue (q, e);
    }
    i++;
  }
  free_queue (q);
  return 0;
}
