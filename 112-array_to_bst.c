#include "binary_trees.h"

/**
 * array_to_bst - array to BST
 * @array: array
 * @size: size of the array
 * Return: pointer to the node
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root;
	bst_t *node;

	if (!array)
		return (NULL);
	root = NULL;
	for (i = 0; i < size; i++)
		node = bst_insert(&root, array[i]);
	while (node->parent != NULL)
		node = node->parent;
	return (node);
}
