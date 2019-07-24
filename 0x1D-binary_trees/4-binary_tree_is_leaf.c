#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: a pointer ot the node to check
 *
 * Return: return 1 if it is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left == NULL || node->right == NULL)
		return (0);
	else
		return (1);
}
