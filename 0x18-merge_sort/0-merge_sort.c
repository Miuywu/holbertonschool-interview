#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * recursor - merge sorter
 * @array: given array
 * @tmp: temp array for sorted part
 * @size: length of array
 */
void recursor(int *array, int *tmp, size_t size)
{
	size_t m = size / 2, i = 0, j = 0, k;

	if (size < 2)
		return;
	recursor(array, tmp, m);
	recursor(array + m, tmp + m, size - m);
	printf("Merging...\n");
	printf("[left]: ");
	print_array(array, m);
	printf("[right]: ");
	print_array(array + m, size - m);
	for (k = 0; k < size; k++)
		if (j >= size - m || (i < m && array[i] < (array + m)[j]))
		{
			tmp[k] = array[i];
			i++;
		}
		else
		{
			tmp[k] = (array + m)[j];
			j++;
		}
	for (k = 0; k < size; k++)
		array[k] = tmp[k];
	printf("[Done]: ");
	print_array(array, size);
}
/**
 * merge_sort - driver
 * @array: array
 * @size: length of array
 */
void merge_sort(int *array, size_t size)
{
	int *tmp;

	if (!array || size < 2)
		return;
	tmp = malloc(sizeof(*tmp) * size);
	if (!tmp)
		return;
	recursor(array, tmp, size);
	free(tmp);
}