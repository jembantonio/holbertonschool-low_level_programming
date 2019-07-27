#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: a pointer to the nodei to find the uncle
 *
 * Return: pointer to the unce node, or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	temp = node->parent->parent;

	if (temp->left == node->parent)
		return (temp->right);

	return (temp->left);
}
