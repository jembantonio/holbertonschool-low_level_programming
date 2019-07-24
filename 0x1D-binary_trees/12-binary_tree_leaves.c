#include "binary_trees.h"

/**
 * binary_tree_leaves -  a function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: the amount of leaves or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
		return (0);

	if (tree != NULL && tree->left == NULL && tree->right == NULL)
		return (1);

	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (leaves);	
}
