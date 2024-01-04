#include "binary_trees.h"

/**
 * binary_tree_size - the function name
 * @tree: the first input
 * Return: the result
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (left + right + 1);
}
