#include "variadic_functions.h"

/**
* print_all - a function that prints anything
* @format: a list of types of arguments passed to the function
*
* Return: void
*/

void print_all(const char * const format, ...)
{
	printall_t list[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	int i, j;
	char *separator;
	va_list args;

	separator = "";

	va_start(args, format);

	i = 0;
	j = 0;

	while (format && format[i])
	{
		while (list[j].c)
		{
			if (format[i] == list[j].c[0])
			{
				printf("%s", separator);
				list[j].function(args);
				separator = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	putchar('\n');

	va_end(args);
}

/**
* print_c - function that prints a char
* @args: argument list
*
* Return: void
*/

void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
* print_i - a function that prints an int
* @args: argument list
*
* Return: void
*/

void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
* print_f - a function that prints a float
* @args: argument list
*
* Return: void
*/

void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
* print_s - a function that prints a string
* @args: argument list
*
* Return: void
*/

void print_s(va_list args)
{
	char *s;

	s = va_arg(args, char *);

	if (s != NULL)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}

