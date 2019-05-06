#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements
 * of a dlistint_t list
 * @h: a pointer to the head of the linked list
 *
 * Return: Count of elements in a linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr;
	size_t count;

	curr = h;
	count = 0;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		count += 1;
	}

	return (count);
}
