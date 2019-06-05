#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: a pointer to the hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr, *temp;
	unsigned int index;

	curr = NULL;
	temp = NULL;
	index = 0;

	if (!ht)
		return;

	while (index < ht->size)
	{
		curr = ht->array[index];

		while (curr != NULL)
		{
			temp = curr->next;
			free(curr->value);
			free(curr->key);
			free(curr);
			curr = temp;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
