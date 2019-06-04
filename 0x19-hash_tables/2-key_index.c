#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key: value key to be stored
 * @size: size of the hash table
 *
 * Return: index of the key value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
