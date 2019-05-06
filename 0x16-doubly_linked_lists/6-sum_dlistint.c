#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all data in a dlist
 * @head: a pointer to the head of the linked list
 *
 * Return: sum of all the data or 0 if dlist is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	temp = head;
	sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
