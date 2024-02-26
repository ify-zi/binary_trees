#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks if node is a leaf
* @node: pointer to node
* Return: return an integer
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);

	return (0);
}
