#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks whether a tree is full
 *
 * @tree: SE
 * Return: 1 if true or 0 is false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	if ((!tree->left && tree->right) || (!tree->right && tree->left))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left == 1 && right == 1)
		return (1);
	return (0);
}
