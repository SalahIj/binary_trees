#include "binary_trees.h"

/**
 * binary_tree_rotate_left - the function name
 * @tree: the first input
 * Return: the result
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *rot;

if (!tree || !tree->right)
return (NULL);

rot = tree->right;
tree->right = rot->left;
if (rot->left)
rot->left->parent = tree;

rot->left = tree;
rot->parent = tree->parent;
tree->parent = rot;
return (rot);
}
