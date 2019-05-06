#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of a dlist
 * @head: a pointer to the list
 * @n: new data for new node
 *
 * Return: the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *curr;

	/* empty list check */
	if (head == NULL)
		return (NULL);

	curr = *head;

	/* allocate new node */
	newnode = malloc(sizeof(dlistint_t));

	/* empty newnode check */
	if (newnode == NULL)
		return (NULL);

	/* make new node */
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	/* traverse to the end of the list with curr */
	while (curr != NULL && curr->next != NULL)
		curr = curr->next;

	/* set newnode->prev to point to last node (curr) */
	newnode->prev = curr;

	/* point previously last node to link to new last node */
	if (curr != NULL)
		curr->next = newnode;
	else
		*head = newnode;

	return (newnode);
}
