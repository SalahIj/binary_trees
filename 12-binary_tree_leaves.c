#include "binary_trees.h"

/**
 * binary_tree_leaves - the function name
 * @tree: the first input
 * Return: the result
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t number = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	number = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (number);
}
