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
	int i;

	if (head != NULL)
	{
		for (i = 0; head != 0; i++)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
	}
}

