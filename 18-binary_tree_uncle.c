#include "binary_trees.h"
/**
 * binary_tree_sibling - function that check if node have sibling
 * @node: node to check
 * Return: node sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL, *sibling = NULL;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	if (parent->left != NULL && parent->right != NULL)
	{
		if (parent->left->n == node->n)
			sibling = parent->right;
		if (parent->right->n == node->n)
			sibling = parent->left;
	}
	return (sibling);
}

/**
 * binary_tree_uncle - function that search uncle of node
 * @node: node to check
 * Return: the node of uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node || !node->parent)
		return (NULL);

	uncle = binary_tree_sibling(node->parent);
	return (uncle);
}
