#ifndef __SORT_H__
#define __SORT_H__

#include <stdio.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void quick_sort_recursion(int *array, size_t size, size_t low, size_t high);
int partition(int *array, size_t size, size_t left, size_t right);
void swap_counter(int *array, int i, int j);
void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2);
void quick_sort_hoare(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
#endif
