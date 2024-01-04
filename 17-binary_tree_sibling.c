#include "binary_trees.h"

/**
 * binary_tree_sibling - the function name.
 * @node: the input of the function.
 * Return: the result
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);
if (node == node->parent->left  && node->parent->right)
return (node->parent->right);
if (node == node->parent->right && node->parent->left)
return (node->parent->left);
return (NULL);
}
