#include "lists.h"

/**
* listint_len - a funciton that returns the number of elemetns in a linked list
* @h: pointer to the head of the list
*
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
