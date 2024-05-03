#include "binary_trees.h"

/**
 * binary_tree_insert_left- inserts a node as the left-child
 *	of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 * Return: Pointer to the created node or
 *	NULL in failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (parent == NULL)
		return (NULL);

	new_left = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		new_left->left = parent->left;
		parent->left->parent = new_left;
	}

	parent->left = new_left;

	return (new_left);
}
