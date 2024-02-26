#include "binary_trees.h"

/**
 * binary_tree_size - count the number of nodes in a tree
 * @tree: the pointer to root node
 * Return: return the total size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left)
			+ binary_tree_size(tree->right));
}
