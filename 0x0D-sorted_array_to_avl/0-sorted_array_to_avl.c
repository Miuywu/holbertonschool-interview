#include "binary_trees.h"
/**
 * recurrer - array to an AVL tree recursively
 * @arr: sorted int array.
 * @start: The first index.
 * @end: The last index.
 * @avl: A pointer to the parent node of tree.
 * Return: The newly created AVL node.
 */
avl_t *recursiveConvert(int *arr, int start, int end, avl_t *avl)
{
	avl_t *node;
	int mid;

	if (begin > end)
		return (NULL);
	mid = (begin + end) / 2;
	node = malloc(sizeof(avl_t));
	if (!new)
		return (NULL);
	node->n = array[mid];
	node->parent = parent;
	node->left = _sorted_array_to_avl(array, begin, mid - 1, new);
	node->right = _sorted_array_to_avl(array, mid + 1, end, new);
	return (new);
}
/**
 * sorted_array_to_avl - checks inputs and calls recurrer.
 * @array: sorted int array.
 * @size: length of the array.
 * Return: avl tree or (NULL) if failed.
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{

	if (!array)
		return (NULL);
	return (recursiveConvert(array, 0, size - 1, NULL));
}