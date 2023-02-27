#include "binary_trees.h"

/**
 * binary_tree_height1 - function that return height of a tree
 * @tree: pointer to a tree
 * Return: size of the tree
 */
int binary_tree_height1(const binary_tree_t *tree)
{

	int count = 0, count2 = 0;

	if (!tree)
		return (-1);
	if (tree->left != NULL || tree->right != NULL)
	{
		count = binary_tree_height1(tree->left) + 1;
		count2 = binary_tree_height1(tree->right) + 1;
	}
	if (count > count2)
		return (count);

	return (count2);
}

/**
 * binary_tree_balance - function that counts the node with childs
 * @tree: node to check
 * Return: the count of the nodes
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height1(tree->left) - binary_tree_height1(tree->right));
}
