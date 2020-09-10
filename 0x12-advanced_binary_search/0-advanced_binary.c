#include "search_algos.h"

/**
 * printer - Prints array.
 * @array: array
 * @start: beginning index.
 * @end: last index.
 */
void printer(int *array, size_t start, size_t end)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%i, ", array[i]);
	printf("%i\n", array[i]);
}

/**
 * helper - find least index of num in array
 * @array: array
 * @value: target value
 * @left: boundary index 
 * @right: boundary index
 * Return: index of target value
 */
int helper(int *array, int value, int left, int right)
{
	int mid;

	if (left > right)
		return (-1);
    mid = left + (right - left) / 2;
	printer(array + left, right - left + 1);

	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	if (array[mid] < value)
		return (helper(array, value, mid + 1, right));
	if (array[mid] >= value)
		return (helper(array, value, left, mid));
	return (-1);
}

/**
 * advanced_binary - find least index of num in array
 * @array: array
 * @size: size of array
 * @value: target value
 * Return: index of value
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (helper(array, value, 0, size - 1));
}