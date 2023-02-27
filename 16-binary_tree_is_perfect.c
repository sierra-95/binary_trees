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
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: node to check
 * Return: 1 if is perfect 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size, height, i;
	int perfect = 2;

	size = binary_tree_size(tree);
	height = binary_tree_height(tree) + 1;

	for (i = 1; i < height; i++)
		perfect = perfect * 2;

	perfect--;
	if (perfect == (int)size)
		return (1);
	return (0);
}
