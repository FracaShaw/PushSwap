#include "push_swap.h"

void bubbleSort (int array[], int array_size)
{
	int i; 
	int j;
	int temp;

    for (i = 0; i < (array_size - 1); ++i)
    {
        for (j = 0; j < array_size - 1 - i; ++j )
        {
            if (array[j] > array[j+1])
            {
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
}

void cpyArrayInt (int array[], int arrayCpy[], int array_size)
{
	int i;

	i = 0;
	while (i < array_size)
	{
		arrayCpy[i] = array[i];
		i++;
	}
}

void cleanNeg (int array[], int array_size)
{
	int *arrayCpy;
	int i;
	int j;

	arrayCpy = malloc(sizeof(*arrayCpy) * array_size);
	cpyArrayInt(array, arrayCpy, array_size);
	bubbleSort(arrayCpy, array_size);
	i = 0;
	while(i < array_size)
	{
		j = 0;
		while (array[i] != arrayCpy[j] && j < array_size)
		{
			j++;
		}
		array[i] = j;
		i++;
	} 
	free(arrayCpy);
}
/*
#include <stdio.h>
int main()
{
	int i; 
	int array[] = {10, 1, -2, 100};

	cleanNeg(array, 3);

	i = 0;
	printf("\narray sorted\n");
	while(i <= 3)
	{
		printf("array[%d] = %d\n", i, array[i]);
		i++;
	}
}
*/