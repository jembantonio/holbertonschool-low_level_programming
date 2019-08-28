#include "search.h"
#include <stdio.h>
/**
 * print_array - prints the array of binary search
 * @array: a pointer to the element at index
 * @low: low of binary search
 * @hi: hi of binary search
 *
 * Return: void
 */
void print_array(int *array, size_t low, size_t hi)
{
	size_t i;

	printf("Searching in array: ");
	i = low;
	while (i <= hi)
	{
		if (i != hi)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
		i++;
	}
}

/**
 * binary_search - a function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array
 * @size: the size of the array
 * @value: value to search
 *
 * Return: void
 */


int binary_search(int *array, size_t size, int value)
{
	size_t low, mid, hi;

	low = 0;
	mid = 0;
	hi = size - 1;


	if (!array)
		return (-1);

	while (low <= hi)
	{
		print_array(array, low, hi);
		mid = (low + hi) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			hi = mid - 1;
		else if (array[mid] < value)
			low = mid + 1;
	}
	return (-1);
}
