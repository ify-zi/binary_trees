#include "binary_trees.h"

/**
* binary_tree_insert_right - insert to the right of the node of a tree
* @parent: pointer of the parent node
* @value: integer to be inserted
* Return: return pointer to new node or return NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	if (parent == NULL)
		return (NULL);

	new_tree = malloc(sizeof(binary_tree_t));

	if (new_tree)
		return (NULL);

	new_tree->n = value;
	new_tree->parent = parent;
	new_tree->right = parent->right;
	new_tree->left = NULL;
	parent->right = new_tree;
	if (new_tree->right)
		new_tree->right->parent = new_tree;

	return (new_tree);
}
