#include "holberton.h"

/**
* reverse_array - a function that reverses the content of an array of integers
* @a: array to be reversed
* @n: number of elements in the array
*
* Return: void
*/

void reverse_array(int *a, int n);
{
	int i, start, end;

	i = 0;

	n = n - 1;

	while (i < n)
		start = a[i];
		end = a[n];

		a[n] = start;
		a[i] = end;

		i++;
		n--;
}
