#include "lists.h"

/**
* add_nodeint_end - a function that adds a new node at the end of a linked list
* @head: a pointer to the address of the head of the linked list
* @n: new element to add
*
* Return: the address of the new element or NULL if it fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last = NULL;
	int i;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new)
	{
		/* inputting data */
		new->n = n;
		new->next = NULL;

		/* traversing through the nodes */
		last = *head;

		/* if linked list is empty, make new node head */
		if (!*head)
		{
			*head = new;
			return (new);
		}

		/* else traverse till the last node */
		for (i = 0; last->next; i++)
			last = last->next;

		/* change the address of the last node */
		last->next = new;
		return (new);
	}

	return (NULL);
}
