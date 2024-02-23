#include "sort.h"
#include <stdbool.h>
/**
 * swap_node_ahead - Swap a node in a listint_t doubly-linked list
 * list of integers with the  it.
 * @list: A pointer to the head oist of integers.
 * @tail: A pointer tolinked list.
 * @shaker: A pointer to the shaker algo.
 */
void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **shakr)
{
	listint_t *tmp = (*shakr)->next;

	if ((*shakr)->prev != NULL)
		(*shakr)->prev->next = tmp;
	else
		*list = tmp;
	tmp->prev = (*shakr)->prev;
	(*shakr)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *shakr;
	else
		*tail = *shakr;
	(*shakr)->prev = tmp;
	tmp->next = *shakr;
	*shakr = tmp;
}

/**
 * swap_node_behind - Swap a node in a listint_tlinked
 * @list: A pointer to the head ofed list of integers.
 * @tail: A pointer to the tail-linked list.
 * @shaker: A pointer to theecocktail shaker algo.
 */
void swap_node_behind(listint_t **list, listint_t **tail, listint_t **shakr)
{
	listint_t *tmp = (*shakr)->prev;

	if ((*shakr)->next != NULL)
		(*shakr)->next->prev = tmp;
	else
		*tail = tmp;
	tmp->next = (*shakr)->next;
	(*shakr)->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = *shakr;
	else
		*list = *shakr;
	(*shakr)->next = tmp;
	tmp->prev = *shakr;
	*shakr = tmp;
}
/**
 * cocktail_sort_list - Sort a listint_t doubly-linked list of integers in
 *                      ascending order using the cocktail shaker algorithm.
 * @list: A pointer to the head of a listint_t doubly-linked list.
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *tail, *shaker;
	bool shaken_not_stirred = false;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (tail = *list; tail->next != NULL;)
		tail = tail->next;

	while (shaken_not_stirred == false)
	{
	shaken_not_stirred = true;
	for (shaker = *list; shaker != tail; shaker = shaker->next)
	{
		if (shaker->n > shaker->next->n)
		{
		swap_node_ahead(list, &tail, &shaker);
		print_list((const listint_t *)*list);
		shaken_not_stirred = false;
	}
	}
	for (shaker = shaker->prev; shaker != *list;
		shaker = shaker->prev)
	{
		if (shaker->n < shaker->prev->n)
		{
		swap_node_behind(list, &tail, &shaker);
		print_list((const listint_t *)*list);
		shaken_not_stirred = false;
		}
	}
}
}
