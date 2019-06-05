#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: a pointer to the head of the hash table
 * @key: key to retrieve
 *
 * Return: the value pair associated with the given key, or NULL if fails
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned int index;

	if (ht == NULL)
		return (NULL);
	if (!key || !(*key))
		return (NULL);

	/* find node[index] */
	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];

	/* traverse table until keys match and return value */
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
