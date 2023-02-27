#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the node with childs
 * @tree: node to check
 * Return: the count of the nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		count++;
	count += (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (count);
}
