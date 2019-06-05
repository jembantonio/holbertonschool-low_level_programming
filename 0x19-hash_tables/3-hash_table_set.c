#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: pointer to the head of the hash table
 * @key: key to be added
 * @value: value to be added and linked to the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *curr;
	int index;

	if (!ht)
		return (0);
	if (!key || !value)
		return (0);

	/* creating new key value pair */
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = (char *)key;
	new->value = (char *)value;

	/* adding new kv pair to hash table */
	index = key_index((unsigned const char *)key, ht->size);
	curr = ht->array[index];
	new->next = curr;
	ht->array[index] = new;

	return (1);
}
