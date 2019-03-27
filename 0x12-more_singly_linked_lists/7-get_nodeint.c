#include "lists.h"

/**
* get_nodeint_at_index - a function that returns the nth node of a linked list
* @head: a pointer to the head of the linked list
* @index: the index of the node that you should return
*
* Return: the nth node of a linked list or NULL if it doesnt exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
	
}
