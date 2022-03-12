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
  if (input_size == 4){
    sortFour_step1(a);
    return;
  }
  if (input_size == 5){
    sortFive_step1(a);
    return;
  }
  if (input_size > 5){
    radix_step1(a, input_size);
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

  sortThree_step2(a, aA, aB, aC);
}

void sortThree_step2(t_stack *a, int aA, int aB, int aC){
  if (aA <= aB && aB <= aC)
    return;
  if (aA > aB && aA <= aC){
    write(1, "sa\n", 3);
    sa(a);
    return;
  }
  if (aA > aB && aB > aC){
    write(1, "sa\n", 3);
    sa(a);
    write(1, "rra\n", 4);
    rra(a);
    return;
  }
  if (aA <= aB && aC < aB){
    write(1, "rra\n", 4);
    rra(a);
    return;
  }
  if (aB <= aC && aA > aC){
    write(1, "ra\n", 3);
    ra(a);
    return;
  }
  if (aA < aC && aB > aC){
    write(1, "sa\n", 3);
    sa(a);
    write(1, "ra\n", 3);
    ra(a);
    return;
  }
}

void sortFour_step1(t_stack *a){
  t_stack b;
  b.head = NULL;
  write(1, "pb\n", 3);
  pb(a, &b);
  sortThree_step1(a);
  sortFour_step2(a, &b);
}

void sortFour_step2(t_stack *a, t_stack *b){
  if (b->head->content <= a->head->content){
    write(1, "pa\n", 3);
    pa(a, b);
    return;
  }
  if (b->head->content >= a->tail->content){
    write(1, "pa\n", 3);
    pa(a, b);
    write(1, "ra\n", 3);
    ra(a);
    return;
  }
  if(b->head->content >= a->head->content && b->head->content <= a->head->next->content){
    write(1, "pa\n", 3);
    pa(a, b);
    write(1, "sa\n", 3);
    sa(a);
    return;
  }
  if(b->head->content <= a->tail->content && b->head->content >= a->head->next->content){
    write(1, "rra\n", 3);
    rra(a);
    write(1, "pa\n", 3);
    pa(a, b);
    write(1, "ra\n", 3);
    ra(a);
    write(1, "ra\n", 3);
    ra(a);
    return;
  }
}

void sortFive_step1(t_stack *a){
  t_stack b;
  b.head = NULL;
  write(1, "pb\n", 3);
  pb(a, &b);
  write(1, "pb\n", 3);
  pb(a, &b);
  sortThree_step1(a);
  sortFour_step2(a, &b);
  sortFive_step2(a, &b);
}

void sortFive_step2(t_stack *a, t_stack *b){
  if (b->head->content <= a->head->content){
    write(1, "pa\n", 3);
    pa(a, b);
    return;
  }
  if (b->head->content >= a->tail->content){
    write(1, "pa\n", 3);
    pa(a, b);
    write(1, "ra\n", 3);
    ra(a);
    return;
  }
  if(b->head->content >= a->head->content && b->head->content <= a->head->next->content){
    write(1, "pa\n", 3);
    pa(a, b);
    write(1, "sa\n", 3);
    sa(a);
    return;
  }
  if(b->head->content >= a->head->next->content && b->head->content <= a->head->next->next->content){
    write(1, "ra\n", 3);
    ra(a);
    write(1, "ra\n", 3);
    ra(a);
    write(1, "sa\n", 3);
    pa(a, b);
    write(1, "rra\n", 3);
    rra(a);
    write(1, "rra\n", 3);
    rra(a);
    return;
  }
  if(b->head->content >= a->head->next->next->content && b->head->content <= a->tail->content){
    write(1, "rra\n", 3);
    rra(a);
    write(1, "pa\n", 3);
    pa(a, b);
    write(1, "ra\n", 3);
    ra(a);
    write(1, "ra\n", 3);
    ra(a);
    return;
  }
}

void radix_step1(t_stack *a, int input_size){
  t_stack b;
  b.head = NULL;
  radix_step2(a, &b, input_size);
}
void radix_step2(t_stack *a, t_stack *b, int input_size){
  t_int *temp;
  int check;
  int i;
  int j;

  temp = a->head;
  check = input_size;
  i = 0;
  j = 0;
  while(temp)
  {
    if (temp->content < check){
      check = temp->content;
      j = i;
    }
    i++;
    temp = temp->next;
  }
  while(j > 0){
    write(1, "ra\n", 3);
    ra(a);
    j--;
  }
  write(1, "pb\n", 3);
  pb(a, b);
  if (a->head->next)
    radix_step2(a, b, input_size);
  else{
    while(input_size > 1){
      write(1, "pa\n", 3);
      pa(a, b);
      input_size--;
    }
  }
}