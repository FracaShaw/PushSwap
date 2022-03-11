#include "push_swap.h"

void sorting(t_stack *a, int input_size){
  if (input_size <= 1)
    return;
  if (input_size == 2){
    sortTwo(a);
    return;
  }
  if (input_size == 3){
    sortThree_step1(a);
    return;
  }
}

void sortTwo(t_stack *a){
  int aA;
  int aB;

  aA = a->head->content;
  aB = a->head->next->content;

  if (aA > aB){
    write(1, "ra\n", 3);
  }
}

void sortThree_step1(t_stack *a){
  int aA;
  int aB;
  int aC;

  aA = a->head->content;
  aB = a->head->next->content;
  aC = a->head->next->next->content;

  sortThree_step2(aA, aB, aC);
}

void sortThree_step2(int aA, int aB, int aC){
  if (aA <= aB && aB <= aC)
    return;
  if (aA > aB && aA <= aC){
    write(1, "sa\n", 3);
    return;
  }
  if (aA > aB && aB > aC){
    write(1, "sa\n", 3);
    write(1, "rra\n", 4);
    return;
  }
  if (aA <= aB && aC < aB){
    write(1, "rra\n", 4);
    return;
  }
  if (aB <= aC && aA > aC){
    write(1, "ra\n", 3);
    return;
  }
  if (aA < aC && aB > aC){
    write(1, "sa\n", 3);
    write(1, "ra\n", 3);
    return;
  }
}