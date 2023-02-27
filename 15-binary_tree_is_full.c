#include "binary_trees.h"
/**
 * binary_tree_is_full - function that size of a tree
 * @tree: pointer to a tree
 * Return: size of the tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if ((!tree->left && !tree->right) || (tree->left && tree->right))
		count = binary_tree_is_full(tree->left) + 0
			+ binary_tree_is_full(tree->right);
	else
		count = 1;
	if (count == 1)
		return (0);
	return (1);
}
