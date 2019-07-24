#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect 0 if it isnt or if its NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_is_perfect(tree->left))
		return (binary_tree_is_perfect(tree->right));

	return (binary_tree_is_perfect(tree->left));

}

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

	if (lheight > rheight)
		return (lheight + i);

	return (rheight + i);
}
