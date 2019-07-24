#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor of
 * a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: balance factor of a node or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	if (tree == NULL)
		return (0);

	balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (balance);

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
