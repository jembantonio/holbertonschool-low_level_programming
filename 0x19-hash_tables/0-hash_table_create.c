#include "hash_tables.h"

/**
 * hash_table_create -  a function that creates a hash table
 * @size: size of the hash table
 *
 * Return: a pointer to the head of the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (!new->array)
		return (NULL);
	new->size = size;

	i = 0;
	while (i < size)
	{
		*((new->array) + i) = NULL;
		i++;
	}

	return (new);
}
