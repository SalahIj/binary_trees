#include "binary_trees.h"

/**
 * binary_tree_uncle - the function name.
 * @node: the input of the function
 * Return: the result.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *grandfather = NULL;

if (node == NULL || !node->parent)
return (NULL);
grandfather = node->parent->parent;
if (!grandfather || !grandfather->left || !grandfather->right)
return (NULL);
if (node == grandfather->left->left || node == grandfather->left->right)
return (grandfather->right);
if (node == grandfather->right->left || node == grandfather->right->right)
return (grandfather->left);
return (NULL);
}
