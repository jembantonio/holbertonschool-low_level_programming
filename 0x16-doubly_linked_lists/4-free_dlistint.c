#include "lists.h"

/**
 * free_dlistint - a function that frees a dlist
 * @head: a pointer to the head of the linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
