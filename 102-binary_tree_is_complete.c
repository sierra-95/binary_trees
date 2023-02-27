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
/**
 * is_complete - check if tree is complete
 * @root: node to check
 * @index: index for count
 * @size: size of nodes
 * Return: 1 if is complete 0 if not
 */
int is_complete(binary_tree_t *root, size_t index, size_t size)
{
	if (root == NULL)
		return (1);

	if (index >= size)
		return (0);

	return (is_complete(root->left, 2 * index + 1, size) &&
			is_complete(root->right, 2 * index + 2, size));

}
/**
 * binary_tree_is_complete - function that checks if tree is complete
 * @tree: node to check
 * Return: 1 if is complete or 0 if not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size, index = 0;

	if (!tree)
		return (0);

	size = binary_tree_size((binary_tree_t *)tree);
	if (is_complete((binary_tree_t *)tree, index, size))
		return (1);
	return (0);
}
