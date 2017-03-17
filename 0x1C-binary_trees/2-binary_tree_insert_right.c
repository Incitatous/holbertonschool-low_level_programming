#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node on the left
 *
 * @parent: SE
 * @value: SE
 * Return: New node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	binary_tree_t *tmp;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = NULL;

	if (parent->left)
	{
		tmp = parent->right;
		tmp->parent = newNode;
		newNode->right = tmp;
	}
	parent->right = newNode;
	return (newNode);
}
