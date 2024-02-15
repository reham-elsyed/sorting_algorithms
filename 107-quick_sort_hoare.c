#include "sort.h"


/**
 *swap_counter- function to swap
 *@array:input array
 *@i: input int 1
 *@j: input int 2
 *Return: void
 */

void swap_counter(int *array,int i, int j)
{
	int temp;

	  temp = array[i];
	  array[i] = array[j];
	  array[j] = temp;
}
/**
 *quick_sort_hoare - function to sort
 *@array: input array
 *@size:input size
 *Return: void
 */
void quick_sort_hoare(int *array, size_t size)
{
	int i, j, pivot;

	if (size < 2)
		return;

	pivot = array[size / 2];
	for (i = 0; i < pivot - 1; i++)
	{
		for (j = size - 1; j > 0; j--)
		{
			if (array[i] > pivot || array[j] < pivot)
			{
		if (i <= j)
		{
			swap_counter(array, i, j);
		
		}

			print_array(array, size);
		}}}
	quick_sort_hoare(array, j + 1);
	quick_sort_hoare(array + i, size - 1);
}
