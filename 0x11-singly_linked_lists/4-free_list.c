#include "lists.h"

/**
* free_list - a function that frees a list_t list
* @head: pointer to the head of the linked list
*
* Return: void
*/

void free_list(list_t *head)
{
	list_t *temp_node;

	while (head != NULL)
	{
		temp_node = head->next;

		if (head->str)
			free(head->str);

		free(head);
		head = temp_node;
	}
}

