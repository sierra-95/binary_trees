#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node in a binary
 * @tree: node to check
 * Return: the size of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (count);
	while (tree->parent)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}
