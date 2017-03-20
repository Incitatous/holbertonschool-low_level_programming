#include "binary_trees.h"
/**
 * binary_tree_height - Gives the size of a (sub)tree
 *
 * @tree: SE
 * Return: New node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);
	if (left > right)
		return (left);
	return (right);
}
