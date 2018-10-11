#include <stdlib.h>
#include <stdio.h>
#include "list.h"

void print_list(struct node *n) {
  if(n == NULL) {
    printf("[] \n");
    return;
  }

  while(n->next) {
    int num = n->i;
    printf("[ Value: %d]", num);
    printf(" --> ");
    n = n->next;
  }

  printf("[ Value: %d ] \n", n->i);
  return;
}

struct node * insert_front(struct node *n, int insert) {
  struct node *new_node;
  new_node = malloc(sizeof(insert) + sizeof(n));
  new_node->i = insert;
  new_node->next = n;
  return new_node;
}

struct node * free_list(struct node *n) {
  if (n->next) {
    free_list(n->next);
    free(n);
  }
  else {
    free(n);
  }
  n = NULL;
  return n; //return pointer
}
