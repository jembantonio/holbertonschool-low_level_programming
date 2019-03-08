#include "holberton.h"

/**
* _calloc - a function that allocates memory for an array, using malloc
* @nmemb: number of elements in the array
* @size: byte size of element
*
* Return: pointer to allocated memory or NULL if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, bit;
	char *arr;

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	bit = nmemb * size;

	for (i = 0; i < bit; i++)
		arr[i] = 0;

	return (arr);
}
