#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index of dlist
 * @head: a pointer to the dlist
 * @index: the node to be deleted
 *
 * Return: 1 if succeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *pre, *post;
	unsigned int chk;

	curr = *head;

	/* empty list check */
	if (*head == NULL)
		return (-1);

	/* one element list */
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	/* freeing element at index */

	/* traverse the list until one element before index */
	while (curr && chk < index)
	{
		curr = curr->next;
		chk++;
	}

	pre = curr->prev;
	pre->next = curr->next;

	if (curr->next)
	{
		post = curr->next;
		post->prev = pre;
	}

	free(curr);
	return (1);

}
