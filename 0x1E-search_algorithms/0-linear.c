#include "search.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear search - a function that searches for a value in an 
 * array of integers using
 * @array: a pointer to the first element of the array
 * @size: the size of the array
 *
 * Return: void
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    i = 0;

    if (!array)
        return (-1);

    while (i < size)
    {
        printf("value checked array [%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return(i);
        i++;
    }

    return (-1);
}
