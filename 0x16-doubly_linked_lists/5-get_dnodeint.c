#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a dlist
 * @head: a pointer to the head of the dlist
 * @index: the position of the node to return
 *
 * Return: the node at dlist[index]
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int check;

	curr = head;

	while (curr != NULL && check <= index)
	{
		if (check == index)
			return (curr);
		curr = curr->next;
		check += 1;
	}

	return (NULL);
}
