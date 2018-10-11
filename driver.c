#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int main() {
  struct node * front_pointer;
  struct node * initial;

  initial = malloc(sizeof(0) + sizeof(front_pointer));
  initial->i = 3;
  initial->next = 0;

  front_pointer = insert_front(initial, 2);
  print_list(front_pointer);

  front_pointer = insert_front(front_pointer, 1);
  print_list(front_pointer);

  front_pointer = insert_front(front_pointer, 0);
  print_list(front_pointer);

  front_pointer = free_list(front_pointer);
  print_list(front_pointer);
}
