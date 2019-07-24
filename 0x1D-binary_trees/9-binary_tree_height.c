#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: height of the tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight, i;

	if (tree == NULL)
		return (0);

	i = 1;
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (tree != NULL && tree->left == NULL && tree->right == NULL)
		i = 0;

	if (lheight > rheight)
		return (lheight + i);

	return (rheight + i);
}
