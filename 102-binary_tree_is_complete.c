#include "binary_trees.h"

/**
 * number_of_nodes - the function name
 * @tree: the input of the function
 * Return: the result
*/
int number_of_nodes(binary_tree_t *tree)
{
int number = 0;

if (!tree)
return (0);
number = 1 + number_of_nodes(tree->left) + number_of_nodes(tree->right);
return (number);
}


/**
 * check_is_complete - the function name
 * @tree: the first input
 * @index: the second input
 * @n: the third input
 * Return: the result
 */
int check_is_complete(binary_tree_t *tree, int index, int n)
{
if (!tree || index >= n || (tree->right && !tree->left))
return (0);
if (!tree->left && !tree->right)
return (1);
if (tree->left && !tree->right)
return (check_is_complete(tree->left, index * 2 + 1, n));

return (check_is_complete(tree->left, index * 2 + 1, n) &&
check_is_complete(tree->right, index * 2 + 2, n));
}

/**
 * binary_tree_is_complete - the function name
 * @tree: the input of the function
 * Return: the result
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
int numb = 0;

if (tree == NULL)
return (0);
numb = number_of_nodes((binary_tree_t *)tree);
return (check_is_complete((binary_tree_t *)tree, 0, numb));
}
