#include "binary_trees.h"

/**
* binary_tree_insert_left - insert to the left of the node of a tree
* @parent: pointer of the parent node
* @value: integer to be inserted
* Return: return pointer to new node or return NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
