#include "binary_trees.h"

/**
 * binary_tree_height - the function name.
 * @tree: the input of the function
 * Return: the result.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t size_left = 0, size_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		size_left = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		size_right = 1 + binary_tree_height(tree->right);
	if (size_left > size_right)
		return (size_left);
	else
		return (size_right);
}
