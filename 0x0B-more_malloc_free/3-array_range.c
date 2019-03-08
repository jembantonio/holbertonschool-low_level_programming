#include "holberton.h"

/**
* array_range - a function that creates an array of integers
* @min: start of the array
* @max: end of the array
*
* Return: pointer to the array or NULL if fails
*/

int *array_range(int min, int max)
{
	int i, val;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	i = 0;

	for (val = min; val <= max; i++, val++)
		arr[i] = val;

	return (arr);
}
