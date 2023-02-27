#include "binary_trees.h"
/**
 * binary_tree_size - function that size of a tree
 * @tree: pointer to a tree
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	count = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);
	return (count);
}
