#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning of a list
 * @head: a point to the linked list
 * @n: new node data
 *
 * Return: the address of the new element, or NULL if failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	/* empty list check */
	if (head == NULL)
		return (NULL);

	/* allocate space for new node */
	newnode = malloc(sizeof(dlistint_t));

	/* empty new node check */
	if (newnode == NULL)
		return (NULL);

	/* create new node */
	newnode->n = n;
	newnode->prev = NULL;
	/* creating the first link from newnode to the head node */
	newnode->next = *head;


	if (*head != NULL)
		/* linking the head node to the new node */
		(*head)->prev = newnode;

	/* setting the beginning of the list */
	*head = newnode;

	return (newnode);
}


