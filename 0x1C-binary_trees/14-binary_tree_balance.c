#include "binary_trees.h"
/**
 * binary_tree_height - Gives the size of a tree
 *
 * @tree: SE
 * Return: Size
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);
	if (left > right)
		return (left);
	return (right);
}

/**
 * binary_tree_balance - Gives the balance of a (sub)tree
 *
 * @tree: SE
 * Return: Difference
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}
