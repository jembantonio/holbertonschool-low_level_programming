#include "lists.h"

/**
* print_listint - a function that prints all the elements of a linked list
* @h: pointer to the head of a linked list
*
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
