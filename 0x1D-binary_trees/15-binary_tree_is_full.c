#include "binary_trees.h"

/**
 * binary_tree_is_full -  a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree
 *
 * Return: 1 if it is full or 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree != NULL && tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
		return (1);

	return (0);
}
