#include "binary_trees.h"

/**
 * balance_binary_tree_height - the function name.
 * @tree: the input of the function.
 * Return: the result
*/
size_t balance_binary_tree_height(const binary_tree_t *tree)
{
size_t size_left = 0, size_right = 0;

if (tree == NULL)
return (0);

if (tree->left != NULL)
size_left = 1 + balance_binary_tree_height(tree->left);
if (tree->right != NULL)
size_right = 1 + balance_binary_tree_height(tree->right);
if (size_left > size_right)
return (size_left);
return (size_right);
}

/**
 * binary_tree_balance - the function name.
 * @tree: the input of the function
 * Return: the result.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height = 0, right_height = 0;

if (tree == NULL)
return (0);

if (tree->left)
left_height = 1 + balance_binary_tree_height(tree->left);
if (tree->right)
right_height = 1 + balance_binary_tree_height(tree->right);
return (left_height - right_height);
}
