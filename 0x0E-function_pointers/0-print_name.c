#include "function_pointers.h"

/**
* print_name - a function that prints a name
* @name: prints name to standard output
* @f: functoin pointer to the print name function
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	if (f)
		f(name);
}
