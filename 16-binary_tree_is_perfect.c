#include "binary_trees.h"

/**
 * perfect_binary_tree_depth - the function name.
 * @tree: the input of the function
 * Return: the result.
*/
size_t perfect_binary_tree_depth(const binary_tree_t *tree)
{
size_t dep = 0;

if (!tree)
return (0);
dep = 1 + perfect_binary_tree_depth(tree->left) +
perfect_binary_tree_depth(tree->right);
return (dep);
}

/**
 * binary_tree_is_perfect - the function name.
 * @tree: the input of the function.
 * Return: the result.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left_perfect = 0, right_perfect = 0, perfect = 0;

if (tree == NULL)
return (0);
left_perfect = perfect_binary_tree_depth(tree->left);
right_perfect = perfect_binary_tree_depth(tree->right);
perfect = left_perfect - right_perfect;
if ((tree && (!tree->left && !tree->right)) || perfect == 0)
return (1);
return (0);
}
