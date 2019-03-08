#include "holberton.h"

/**
* malloc_checked - a function that allocates memory using malloc
* @b: bytes of memory to be allocated
*
* Return: pointer to memory address of 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	else
		return(mem);

}
