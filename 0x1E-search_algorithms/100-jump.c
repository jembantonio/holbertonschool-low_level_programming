#include "search.h"
#include <stdio.h>
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
    size_t i;
    size_t jump;

    i = 0;
    jump = sqrt(size);

    if (!array)
        return (-1);

    else if (array[i] == value)
        return i;

    while (i < size && value > array[i])
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i += jump;
    }    

    printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
    
    if (i != 0)
        i -= jump; 

    while (i < size)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
        else if (array[i] > value)
            return (-1);
        i += 1;
    }
    return(-1);
}
