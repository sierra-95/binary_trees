#include "binary_trees.h"
#include <limits.h>

/**
 * bst_search - search a value
 * @tree: root
 * @value: value of the node
 * Return: pointer to the node
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	while (tree)
	{
		if (value < tree->n)
			tree = tree->left;
		else if (value > tree->n)
			tree = tree->right;
		else
			return ((bst_t *)tree);
	}
	return (NULL);
}
