#include "lists.h"

/**
* add_nodeint - a function that adds a new node
* at the beginning of a linked list
* @head: a pointer to the address of the head of the linked list
* @n: new element to add
*
* Return: the address of the new element or NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new || head)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	return (NULL);
}
