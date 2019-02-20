#include "holberton.h"

/**
* print_array -  a function that prints n elements of an
* array of integers, followed by a new line
* @a: pointer to an array
* @n: number of elements to be printed
*
* return: void
*/

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index + 1 != n)
			printf(", ");
	}
	printf("\n");
}
