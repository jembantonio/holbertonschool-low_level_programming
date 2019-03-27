#include "lists.h"

/**
* sum_listint - a function that returns the sum of
* all the data in a linked list
* @head: pointer to the start of the linked list
*
* Return: sum of all nodes or 0 if empty
*/

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
