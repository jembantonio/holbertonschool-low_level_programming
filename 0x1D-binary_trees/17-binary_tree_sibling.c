#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: a pointer to the node to find sibling
 *
 * Return: pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	if (node == node->parent->right)
		return (node->parent->left);
	
	return (NULL);

}
