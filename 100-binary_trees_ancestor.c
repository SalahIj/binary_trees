#include "binary_trees.h"

/**
 * binary_trees_ancestor - the function name
 * @first: the first input
 * @second: the second input
 * Return: the result
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
const binary_tree_t *fir_anc, *sec_anc;

if (!first || !second)
return (NULL);
for (fir_anc = first; fir_anc; fir_anc = fir_anc->parent)
{
sec_anc = second;
while (sec_anc != NULL)
{
if (fir_anc == sec_anc)
return ((binary_tree_t *)fir_anc);
sec_anc = sec_anc->parent;
}
}
return (NULL);
}
