#include "sort.h"
/**
 * heap_sort - Heap sorts
 * @array: The array 
 * @size: The length
 */
void heap_sort(int *array, size_t size)
{
	int i;

	for (i = size / 2 - 1; i >= 0; i--)
		converter(array, size, i, size);
	for (i = size - 1; i >= 0; i--)
	{
		switch(&array[0], &array[i]);
		if (i != 0)
			print_array(array, size);
		converter(array, i, 0, size);
	}
}
/**
 * converter - heap from an array.
 * @arr: The array
 * @n: The size 
 * @i: The index 
 * @size: The length 
 */
void converter(int *arr, int n, int i, size_t size)
{
	int max = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < n && arr[left] > arr[max])
		max = left;

	if (right < n && arr[right] > arr[max])
		max = right;

	if (max != i)
	{
		switch(&arr[i], &arr[max]);
		print_array(arr, size);
		converter(arr, n, max, size);
	}
}
/**
 * switch - switchs two integers.
 * @a: The integer to switch with b.
 * @b: The integer to switch with a.
 */
void switch(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
