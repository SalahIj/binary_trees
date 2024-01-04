#include "binary_trees.h"

/**
 * binary_tree_delete - the function name
 * @tree: the input of the funtion
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
	else
		return;
	free(tree);
}
