#include "lists.h"

/**
 * insert_dnodeint_at_index -  a function that inserts a new node
 * at a given positon
 * @h: a pointer to the doubly linked list
 * @idx: index at which the new node should be added
 * @n: data of the new node
 *
 * Return: the address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *curr;
	unsigned int chk;

	curr = *h;
	/* empty list check */
	if (h == NULL)
		return (NULL);
	/* allocate and create new node */
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	/* inserting new node in empty list at index 0 */
	if (*h == NULL)
	{
		newnode->prev = NULL;
		newnode->next = NULL;
		return (newnode);
	}
	/* traverse the list until you the pointer is at the node previous the idx */
	while (chk < idx - 1)
	{
		curr = curr->next;
		if (curr == NULL)
			return (NULL);
		chk++;
	}
	/* inserting the new node at the index */
	newnode->next = curr->next;
	newnode->prev = curr;
	curr->next = newnode;
	/* condition if the newnode is not the last on the list*/
	if (newnode->next != NULL)
	{
		curr = newnode->next;
		curr->prev = newnode;
	}
	return (newnode);
}
