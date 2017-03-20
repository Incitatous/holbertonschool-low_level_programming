#include "binary_trees.h"
/**
 * binary_tree_is_depth - Gives the depth of a (sub)tree
 *
 * @node: SE
 * Return: New node
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	int depth;

	if (!node || !node->parent)
		return (0);
	depth = 1 + binary_tree_depth(node->parent);
	return depth;
}
