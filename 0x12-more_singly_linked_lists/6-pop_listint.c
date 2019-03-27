#include "lists.h"

/**
* pop_listint - a function that deletes the head node of a listint_t linked
* list, and returns the head node’s data (n)
* @head: pointer to the address of the linked list
*
* Return: head nodes data (n) or NULL
*/

int pop_listint(listint_t **head)
{
	int head_n;
	listint_t *temp;

	head_n = 0;

	if (head)
	{

		/* Setting a temporary variable to the next node in the list */
		temp = (*head)->next;

		/* Giving new data to the new head */
		head_n = (*head)->n;

		/* Freeing original head */
		free(*head);

		/* Setting the old head to the next */
		(*head) = temp;

		return (head_n);
	}

	return (0);
}
