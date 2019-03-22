#include "lists.h"

/**
* add_node_end - a function that adds a new node at the end of a lit_t list
* @head: pointer to the head of a linked list
* @str: pointer to the string to be inserted
*
* Return: address of the new string
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int len, i;
	list_t *new, *temp_node;

	/* STRLEN */
	len = 0;

	while (str[len])
		len++;

	/* FUNCTION */
	new = malloc(sizeof(list_t));

	if (new)
	{
		new->len = len;
		new->str = strdup(str);
		new->next = NULL;
		temp_node = *head;

		if (!*head)
		{
			*head = new;
			return (new);
		}

		i = 0;

		while (temp_node->next)
			temp_node = temp_node->next;
			i++;
		temp_node->next = new;

		return (new);
	}

	else
		return (NULL);
}
