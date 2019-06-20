#include "sort.h"

/**
 * swap - swaps two integers in an array
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * pivot - a function that generates pivot points for the quick sort method
 * @array: a pointer to the first element of the array
 * @low: first index of the array
 * @high: last index of the array
 * @size: size of the arrayl
 *
 * Return: void
 */

void pivot(int *array, int low, int high, int size)
{
	int pos;

	if (low < high)
	{
		pos = partition(array, low, high, size);
		pivot(array, low, pos - 1, size);
		pivot(array, pos + 1, high, size);
	}
}

/**
 * partition - traversing the array finding a small element to swap
 * @array: a pointer to the first element of the array
 * @low: first index of the array
 * @high: last index of the array
 * @size: size of the array
 *
 * Return: void
 */

int partition(int *array, int low, int high, int size)
{
	int i, j;
	int pivot = array[high];

	i = low - 1;
	j = low;


	while (j < high)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
		j++;
	}
	i++;
	if (pivot < array[i + 1])
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}

/**
 * quick_sort - uses the quick sort method to sort an array
 * @array: a pointer to the first element of the array
 * @size: the size of the array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	pivot(array, 0, size - 1, size);
}

