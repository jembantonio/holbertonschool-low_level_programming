#include "function_pointers.h"

/**
* int_index - a function that searches for an integer
* @array: pointer to array to search
* @size: number of elements in a array
* @cmp: pointer to the function to compare values
*
* Return: i or -1 if no element matches or size is less than 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
