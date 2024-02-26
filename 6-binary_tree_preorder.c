#include "binary_trees.h"

/**
* binary_tree_preorder - print as a stack from left to right
* @tree: pointer to tree
* @func: pointer to function for print node value
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
