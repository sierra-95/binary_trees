#include "binary_trees.h"
/**
 * binary_root1 - function that creates a binary tree node
 * @tree: node
 * Return: pointer to root
 */
binary_tree_t *binary_root1(binary_tree_t *tree)
{

	while (!tree)
		tree = tree->parent;
	return (tree);
}
/**
 * binary_tree_rotate_left - function that checks if tree is complete
 * @tree: node to check
 * Return: 1 if is complete or 0 if not
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *x, *y, *root;

	if (!tree)
		return (NULL);
	x = tree;
	y = x->right;
	x->right = y->left;
	if (y->left != NULL)
		y->left->parent = x;
	y->parent = x->parent;
	root = binary_root1(tree);
	if (x->parent == NULL)
		root = y;
	else if (x == x->parent->left)
		x->parent->left = y;
	else
		x->parent->right = y;
	y->left = x;
	x->parent = y;
	return (root);

}
