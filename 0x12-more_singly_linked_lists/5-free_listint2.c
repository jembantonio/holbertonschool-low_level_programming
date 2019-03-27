#include "lists.h"

/**
* free_listint2 - a function that frees a linked list and
* sets the head to NULL
* @head: a pointer to the address of the start of the linked list
*
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head)
	{
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
	}
}
