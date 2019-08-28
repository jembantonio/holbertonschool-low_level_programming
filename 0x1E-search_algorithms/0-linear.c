#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - a function that searches for a value in an
 * array of integers using
 * @array: a pointer to the first element of the array
 * @size: the size of the array
 * @value: value to search
 *
 * Return: void
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array [%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
