#include "binary_trees.h"

/**
 * binary_tree_height - function that return height of a tree
 * @tree: pointer to a tree
 * Return: size of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0, count2 = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		count = binary_tree_height(tree->left) + 1;
		count2 = binary_tree_height(tree->right) + 1;
	}
	if (count > count2)
		return (count);

	return (count2);
}

/**
 * binary_tree_levelorder - level order traversal
 * @tree: pointer to the root node
 * @func:second node
 * Return: pointer to lowest parent
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (!tree || !func)
		return;
	height = binary_tree_height(tree);

	for (i = 1; i <= height + 1; i++)
		printlevel(tree, i, func);
}

/**
 * printlevel - function that return height of a tree
 * @tree: pointer to a tree
 * @level: line
 * @func: pointer to function
 * Return: size of the tree
 */
void printlevel(const binary_tree_t *tree, size_t level, void (*func)(int))
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		printlevel(tree->left, level - 1, func);
		printlevel(tree->right, level - 1, func);
	}
}
