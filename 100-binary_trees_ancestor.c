#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds lowest ancestor
 * @first: node to check
 * @second:second node
 * Return: pointer to lowest parent
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *temp = (binary_tree_t *)first;
	binary_tree_t *temp2 = (binary_tree_t *)second;
	binary_tree_t *parent = NULL;

	if (!first || !second)
		return (NULL);
	if ((!temp->parent && !temp2->parent) && (temp->n == temp2->n))
		return (temp);
	if (!temp->parent)
		parent = temp;
	else if (!temp2->parent)
	{
		parent = temp2;
		while (parent != NULL)
		{
			temp = (binary_tree_t *)first;
			while (temp->parent != NULL)
			{
				if (parent->n == temp->parent->n)
					return (parent);
				temp = temp->parent;
			}
			parent = parent->parent;
		}
	}
	else
		parent = temp->parent;
	while (parent != NULL)
	{
		temp2 = (binary_tree_t *)second;
		while (temp2->parent != NULL)
		{
			if (parent->n == temp2->parent->n)
				return (parent);
			temp2 = temp2->parent;
		}
		parent = parent->parent;
	}
	return (NULL);
}
