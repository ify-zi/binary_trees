#include "binary_trees.h"

/**
* binary_tree_insert_right - insert to the right of the node of a tree
* @parent: pointer of the parent node
* @value: integer to be inserted
* Return: return pointer to new node or return NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
