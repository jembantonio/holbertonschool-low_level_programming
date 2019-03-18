#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list args);
void print_i(va_list args);
void print_f(va_list args);
void print_s(va_list args);

/**
* struct list - a struct that points to a char * as a first parameter
* and a function pointer as its second
* @c: char pointer to match
* @function: function pointer
*/

typedef struct list
{
	char *c;
	void (*function)(va_list);
} printall_t;



#endif
