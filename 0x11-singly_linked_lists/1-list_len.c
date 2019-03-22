#include "lists.h"

/**
* list_len - a function that returns the number of elements in a linked list
* @h: pointer to the head of the linked list
*
* Return: number of elements
*/

size_t list_len(const list_t *h)
{
	int count;

	for (count = 0; h; count++)
		h = h->next;

	return (count);
}
