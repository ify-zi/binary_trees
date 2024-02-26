#include "binary_trees.h"

/**
* binary_tree_depth - find the max depth of the tree
* @tree: pointer to depth of node in tree
* Return: the int or 0 if otherwise
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth = 0;
	binary_tree_t *current;

	if (!tree)
		return (0);

	current = tree->parent;
	while (current)
	{
		node_depth++;
		current = current->parent;
	}

	return (node_depth);
}
