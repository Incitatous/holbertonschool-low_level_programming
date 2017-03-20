#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with 1(+) child
 *
 * @tree: SE
 * Return: New node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int lnode, rnode;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	lnode = binary_tree_nodes(tree->left);
	rnode = binary_tree_nodes(tree->right);
	return (1 + lnode + rnode);
}
