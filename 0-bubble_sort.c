#include "sort.h"
#include <stddef.h>
/**
 *bubble_sort -function to do bubble sort on array
 *@array: pointer to array input
 *@size: input size of array
 *Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t b, a;
	int temp;
	int flag = 0;


	if (array == NULL || size < 2)
		return;
	while (flag == 0)
	{
		flag = 1;

	for (a = 0; a < size - 1; a++)
	{
		for (b = 0; b < size - a - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				temp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = temp;

			
		
				print_array(array, size);
				flag = 0;
		}}
				
		
			
		
	}
}
}

