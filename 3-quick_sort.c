#include "sort.h"


/**
 *swap_counter- function to swap
 *@i: input int 1
 *@j: input int 2
 *Return: void
 */

void swap_counter(int *i, int *j)
{
		int temp;

temp = *i
*i = *j;
*j = temp;
}
/**
 *partition - function for pas
 *@array: gfdfsff
 *@size: size
 *@low: input
 *@high: inpyur
 *Return i
 */
int partition(int *array, size_t size,  size_t low, size_t high)
{
	size_t i = low;
	size_t j;
	int pivot_value = array[high];
	
	for (j = 0; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
		swap_counter(&array[i], &array[j]);
		i++;
		}
		swap_counter(&array[i], &array[high]);

	print_array(array, size);
	}
return (i);
}
/**
 *quick_sort_recursion - function to sort
 *@array: input array
 *@size:input size
 *@low:in[ut
 *@high:ii input
 *Return: void
 */
void quick_sort_recursion(int *array, size_t size, size_t low, size_t high)
{
	size_t pivot_index;
	if (high <= low){
		return;
	}
	else
	{
pivot_index = partition(array, size, low, high);
quick_sort_recursion(array, size, low, pivot_index - 1);
quick_sort_recursion(array, size, pivot_index + 1, high);
}
}
/**
 *quick_sort- function to quik sort
 *@size:offd
 */
void quick_sort(int *array, size_t size)
{
	        if (array == NULL || size < 2)
			return;

		quick_sort_recursion(array, size, 0, size - 1);
}
