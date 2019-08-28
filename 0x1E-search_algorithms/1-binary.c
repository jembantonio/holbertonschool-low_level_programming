#include "search.h"
#include <stdio.h>

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
            return(mid);
        else if (array[mid] > value)
            hi = mid - 1;
        else if (array[mid] < value) 
            low = mid + 1;
    }
    return (-1);
}
