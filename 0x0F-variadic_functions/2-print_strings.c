#include "variadic_functions.h"

/**
* print_strings - a function that prints strings, followed by a new line
* @separator: string to be printed between the strings
* @n: number of strings
*
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *arguments = va_arg(args, char *);

		printf("%s", arguments);

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
