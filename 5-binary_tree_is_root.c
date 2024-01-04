#include "binary_trees.h"

/**
 * binary_tree_is_root - the function name
 * @node: the input of the function
 * Return: the result
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
