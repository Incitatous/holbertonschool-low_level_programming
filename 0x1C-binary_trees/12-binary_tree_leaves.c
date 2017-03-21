#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves
 *
 * @tree: SE
 * Return: New node
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int lleaves, rleaves;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	lleaves = binary_tree_leaves(tree->left);
	rleaves = binary_tree_leaves(tree->right);
	return (lleaves + rleaves);
}
