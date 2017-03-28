#include "binary_trees.h"
/**
 * binary_tree_uncle - Returns the uncle of node
 *
 * @node: SE
 * Return: Uncle or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (0);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - Returns the uncle of node
 *
 * @node: SE
 * Return: Uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
