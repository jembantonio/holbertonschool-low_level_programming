#include "binary_trees.h"

/**
 * binary_tree_insert_right -  a function that inserts a node as the
 * right- child of another node
 * @parent: a pointer to the node to insert the left child
 * @value: the value to store
 *
 * Return: a pointer to the created node or NULL if failed
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
		parent->right = node;
	}

	else
	{
		parent->right = node;
	}

	return (node);
}
