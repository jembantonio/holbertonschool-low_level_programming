#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a
 * node in a binary tree
 * @tree: a pointer to the node to measure the depth
 *
 * Return: depth of the tree of 0 if NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	for (depth = 0; tree->parent != NULL; tree = tree->parent)
		depth++;
	return (depth);
}
