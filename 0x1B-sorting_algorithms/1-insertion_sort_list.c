#include "sort.h"

/**
 * insertion_sort_list - uses the insertion method to sort a doubly linked list
 * containing integers
 * @list: a double pointer to the head of the doubly linked list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = NULL, *temp = NULL;

	if (list == NULL || *list == NULL)
		return;

	curr = *list;
	while (curr != NULL)
	{
		temp = curr;
		while ((temp->prev != NULL) && (temp->n < temp->prev->n))
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
			{
				temp->next->prev = temp->prev;
			}
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;

			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;

			print_list(*list);
		}
		curr = curr->next;
	}
}
