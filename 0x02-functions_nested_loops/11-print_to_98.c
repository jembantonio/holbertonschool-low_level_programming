#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* print_to_98 - a function that prints all natural numbers from n to 98
* followed by a new line
* @n: int
*
* Return: void
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}

		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
