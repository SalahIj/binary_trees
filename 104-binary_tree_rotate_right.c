#include "binary_trees.h"

/**
 * binary_tree_rotate_right - the function name
 * @tree: the input of the function
 * Return: the result
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *rot_right;

if (!tree || !tree->left)
return (NULL);

rot_right = tree->left;
tree->left = rot_right->right;

if (rot_right->right)
rot_right->right->parent = tree;

rot_right->right = tree;
rot_right->parent = tree->parent;
tree->parent = rot_right;
return (rot_right);
}
