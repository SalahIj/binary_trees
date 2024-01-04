#include "binary_trees.h"

/**
 * binary_tree_nodes - the function name.
 * @tree: the input of the function
 * Return: the result
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t number = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		number = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (number);
}
