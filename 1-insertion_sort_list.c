#include "sort.h"
/**
 *insertion_sort_list - function to sort by insertion
 *@list: input linked list
 *Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *n_sorted, *i_sorted, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (n_sorted = (*list)->next; n_sorted != NULL; n_sorted = temp)
	{
		temp = n_sorted->next;
		i_sorted = n_sorted->prev;
		while (i_sorted != NULL && n_sorted->n < i_sorted->n)
		{
			swap_nodes(list, &i_sorted, n_sorted);
			print_list((const listint_t *)*list);
		}}}

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @h: A pointer to the head of the doubly-linked list.
 * @n1: A pointer to the first node to swap.
 * @n2: The second node to swap.
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
(*n1)->next = n2->next;
if (n2->next != NULL)
	n2->next->prev = *n1;
n2->prev = (*n1)->prev;
n2->next = *n1;
if ((*n1)->prev != NULL)
	(*n1)->prev->next = n2;
else
	*h = n2;
(*n1)->prev = n2;
*n1 = n2->prev;
}
