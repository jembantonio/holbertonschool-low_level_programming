#include "binary_trees.h"

/**
 * binary_tree_insert_left -  a function that inserts a node as the
 * left- child of another node
 * @parent: a pointer to the node to insert the left child
 * @value: the value to store
 *
 * Return: a pointer to the created node or NULL if failed
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
	}

	else
	{
		parent->left = node;
	}

	return (node);
}
