#include "holberton.h"

/**
* _calloc - a function that allocates memory for an array, using malloc
* @nmeb: number of elements in the array
* @size: byte size of element
*
* Return: pointer to allocated memory or NULL if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, bit;
	char *ar;

	ar = malloc(nmemb * size);

	if (ar == NULL)
		return (NULL);

	bit = nmemb * size;

	for (i = 0; i < bit; i++)
		arr[i] = 0;

	return (ar);
}
