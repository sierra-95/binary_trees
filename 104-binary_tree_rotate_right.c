#include "binary_trees.h"

/**
 * binary_root - function that creates a binary tree node
 * @tree: node
 * Return: pointer to root
 */
binary_tree_t *binary_root(binary_tree_t *tree)
{

	while (!tree)
		tree = tree->parent;
	return (tree);
}

/**
 * binary_tree_rotate_right - function that checks if tree is complete
 * @tree: node to check
 * Return: pointer to the root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *x, *y, *root;

	if (!tree)
		return (NULL);
	x = tree;
	y = x->left;
	x->left = y->right;
	if (y->right != NULL)
		y->right->parent = x;
	y->parent = x->parent;
	root = binary_root(tree);
	if (x->parent == NULL)
		root = y;
	else if (x == x->parent->right)
		x->parent->right = y;
	else
		x->parent->left = y;
	y->right = x;
	x->parent = y;
	return (root);

}
