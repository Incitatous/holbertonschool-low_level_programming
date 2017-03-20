#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves
 *
 * @node: SE
 * Return: New node
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves;

	leaves = 0;

	if (!tree->left && !tree->right)
		return (1);
	if (!tree)
		return (0);
	if (tree->left)
		leaves += 1;
	if (tree->right)
		leaves += 1;
	return (leaves);
}
