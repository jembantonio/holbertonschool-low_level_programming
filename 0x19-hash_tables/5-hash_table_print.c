#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: a pointer to the head of the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int index, flag;

	index = 0;
	flag = 0;

	if (!ht || !ht->array)
		return;

	printf("{");

	while (index < ht->size)
	{
		node = ht->array[index];

		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("\'%s\': \'%s\'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
		index++;
	}

	printf("}\n");
}
