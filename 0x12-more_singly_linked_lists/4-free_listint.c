#include "lists.h"

/**
* free_listint - a function that frees a linked list
* @head: a pointer to the head of the linked list
*
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head->temp;
		free(head);
		head = temp;
	}

	if (!head)
		return;
}

