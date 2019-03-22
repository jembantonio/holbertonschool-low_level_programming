#include "lists.h"

/**
* add_node - a function that adds a new node at the beginning of a list_t list
* @head: a pointer to the head of the linked list
* @str: a pointer to the string to be inserted
*
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;

	/* STRLEN */
	len = 0;

	while (str[len])
		len++;

	/* ADDING */
	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	else
	{
		new->len = len;
		new->str = strdup(str);
		new->next = *head;
		*head = new;
		return (new);
	}
}
