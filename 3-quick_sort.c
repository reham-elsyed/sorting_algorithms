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
 *partition- function to sort
 *@array: input array
 *@size:input size
 *Return: void
 */
int partition(int *array, size_t size)
{
		size_t i, j = 0;
		int pivot;

pivot = array[size - 1];
for (i = 0; i < size - 1; i++)
{
	if (array[i] < pivot)
	{

swap_counter(array, i, j);
j++;}}
swap_counter(array, j, size - 1);
print_array(array, size);
	return (j);
	}
/**
 *quick_sort- function to sort
 *@array: input array
 *@size:input size
 *Return: void
 */
void quick_sort(int *array, size_t size)
{
	int pivot;
	if (size < 2)
		return;
pivot = partition(array, size);
quick_sort(array, pivot);
quick_sort(array + pivot + 1, size - pivot - 1);
}
