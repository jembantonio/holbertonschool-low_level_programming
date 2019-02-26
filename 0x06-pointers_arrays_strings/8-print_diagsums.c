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
	int index1, index2, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (index1 = 0; index1 < size; index1++)
	{
		sum1 += a[(size + 1) * index1];
	}
	for (index2 = 0; index2 <= size; index2++)
	{
		sum2 += a[(size - 1) * index2];
	}

	printf("%d, %d\n", sum1, sum2);
}
