#include "sort.h"


/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 *shell_sort - function to sort using knuth insertion sort
 *@array: input array
*@size: input size
 *Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t j, i, h;

	if (array == NULL || size < 2)
		return;

	h = 1;
	while (h < (size / 3))
	{
		h = h * 3 + 1;
	}
		while (h >= 1)
		{
			for (i = h; i < size; i++)
			{
				j = i;
				while (j >= h && array[j - h] > array[j])
				{
					swap_ints(array + j, array + (j - h));
					j -= h;
				}
			}
			h /= 3;
			print_array(array, size);
		}
}
