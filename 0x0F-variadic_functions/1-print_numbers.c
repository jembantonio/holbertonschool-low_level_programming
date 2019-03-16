#include "variadic_functions.h"

/**
* print_numbers - a function that prints numbers, followed by a new line
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
*
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list args;

	va_start(args, n);


	if (separator == NULL)
		separator = "";

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(args, unsigned int));
		if (index < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
