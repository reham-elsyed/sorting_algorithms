#include "sort.h"
/**
 *swap-functio nto psawp
 *@a: pointer to element
 *@b: pointer to element
 *Return: void
 */
void swap(int *a, int *b){
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
/**
 *_partition - function to partition of hoare partition
 *@array: input array
 *@size: size
 *@start: start
 *@end: end point
 *Return: void
 */
int _partition(int *array,size_t size, size_t left, size_t right){
  int i, j, pivot;
  pivot = array[right];
 for (i = left - 1, j = right + 1; i < j;)
   {
  do{
    i++;
  }while (array[i] < pivot);
  do{
    j--;
  } while (array[j] > pivot);
     if (i < j)
     {
    swap(&array[i], &array[j]);
     print_array(array, size);
     }}
  return (i);
}
/**
 *Quick_recursive- function to recursive input array atarting and
 *@array: input array
 *@size: size
 *@start: start
 *@end: end point
 *Return: void
 */
void quick_recursive(int *array, size_t size, int start, int end)
{
 int partition;
  if (end - start > 0)
  {
   partition = _partition(array, size, start, end);
    quick_recursive(array, size, start, partition - 1);
    quick_recursive(array, size, partition, end);
}}
/**
 *quick_sort -function to sort quicksort
 *@array: input array of intgers
 *@size: input sizr of arrsy
 *Return: void
 */
void quick_sort_hoare(int *array, size_t size)
{
  if (array == NULL || size < 2)
    return;
  quick_recursive(array,size, 0, size - 1);
}
