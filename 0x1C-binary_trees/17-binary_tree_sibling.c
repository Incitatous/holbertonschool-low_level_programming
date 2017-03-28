#include "binary_trees.h"
/**
 * binary_tree_sibling - Returns the sibling of tree
 *
 * @node: SE
 * Return: Sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (0);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
