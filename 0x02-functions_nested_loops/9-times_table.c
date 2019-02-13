#include "holberton.h"

/**
* times_table - a function that prints the 9 times table, starting with 0
*
* Return: void
*/

void times_table(void)
{
	int a, b, product;

	for (b = 0; b < 10; b++)
	{
		_putchar('0');
		for (a = 1; a < 10; a++)
		{
			product = a * b;
			if (product <= 9)
			{
				if (a < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
			}
			else
			{
				if (a < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + product / 10);
					_putchar('0' + product % 10);
				}
			}
			if (a == 9)
			_putchar('\n');
		}
	}
}
