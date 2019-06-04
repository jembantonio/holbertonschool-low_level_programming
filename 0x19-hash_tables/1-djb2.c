#include "hash_tables.h"

/**
 * hash_djb2 - a hash function implementing the djb2 algorithm
 *
 *
 */

unsigned long int hash(unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;
	    
	while (c = *str++)
			hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return hash;
}
