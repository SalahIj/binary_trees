#include "binary_trees.h"


/**
 * level_binary_tree_height - the function name.
 * @tree: the input of the function
 * Return: the result.
*/
size_t level_binary_tree_height(const binary_tree_t *tree)
{
size_t size_left = 0, size_right = 0;

if (tree == NULL)
return (0);

if (tree->left != NULL)
size_left = 1 + level_binary_tree_height(tree->left);
if (tree->right != NULL)
size_right = 1 + level_binary_tree_height(tree->right);
if (size_left > size_right)
return (size_left);
else
return (size_right);
}

/**
 * func_nodes_level - the function name
 * @tree: the first input
 * @level: the second input
 * @func: the third input
*/
void func_nodes_level(const binary_tree_t *tree, int level, void (*func)(int))
{
if (!tree)
return;

if (level == 1)
func(tree->n);
if (level > 1)
{
func_nodes_level(tree->left, level - 1, func);
func_nodes_level(tree->right, level - 1, func);
}
}

/**
 * binary_tree_levelorder - the function name
 * @tree: the first input
 * @func: the second input
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
int level, height = 0;

if (tree == NULL || func == NULL)
return;
height = level_binary_tree_height(tree) + 1;
for (level = 1; level <= height; level++)
func_nodes_level(tree, level, func);
}
