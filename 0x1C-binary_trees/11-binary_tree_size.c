#include "binary_trees.h"
/**
 * binary_tree_size - Gives the size of a (sub)tree
 *
 * @tree: SE
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (1 + left + right);
}
