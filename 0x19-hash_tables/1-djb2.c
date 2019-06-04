#include "hash_tables.h"

/**
 * hash_djb2 - a hash function implementing the djb2 algorithm
 * @str: value to be converted to an index
 *
 * Return: the index of the value in the array
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
