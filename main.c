#include "push_swap.h"

int main(int argc, char *argv[]){
	t_stack a;

	a = create_stack_a(argc, argv);
	if (!a.head)
		return(0);
	sorting(&a, argc - 1);
}