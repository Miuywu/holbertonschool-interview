#include "binary_trees.h"

/**
 * binary_tree_node - creates node in tree
 * @parent: pointer to parent node
 * @value: the value to store in the node
 * Return: new node or null if fails
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = calloc(1, sizeof(*new));

	if (new != NULL)
	{
		new->n = value;
		new->parent = parent;
	}
	return (new);
}
