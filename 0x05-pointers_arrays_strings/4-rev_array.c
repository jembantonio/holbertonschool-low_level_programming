#include "holberton.h"

/**
* reverse_array - a function that reverses the content of an array of integers
* @a: array to be reversed
* @n: number of elements in the array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int index, tmp;

	index = 0;

	n -= 1;

	while (index < n)
	{
		tmp = a[index];
		a[index] = a[n];
		a[n] = tmp;

		index++;
		n--;
	}
}

