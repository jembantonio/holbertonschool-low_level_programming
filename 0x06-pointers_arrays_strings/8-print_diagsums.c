#include "holberton.h"

/**
* print_diagsums - a function that prints the sum of the two diagonals
* of a square matrix of integers
* @a: a pointer to square matrix of ints
* @size: length of matrix
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int index, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (index = 0; index < size; index++)
		sum1 += a[((size + 1) * index)];
	for (index = 0; index < size; index++)
		sum2 += a[((size - 1) * index)];
	printf("%d, %d\n", sum1, sum2);
}
