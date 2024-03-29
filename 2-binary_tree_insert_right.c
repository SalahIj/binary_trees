#include "binary_trees.h"

/**
 * binary_tree_insert_right - the function name
 * @parent: the first input
 * @value: the second input
 * Return: the new right child
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);
	right_child = binary_tree_node(parent, value);
	if (right_child == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		right_child->right = parent->right;
		parent->right->parent = right_child;
	}
	parent->right = right_child;
	return (right_child);
}
