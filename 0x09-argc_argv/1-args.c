#include "holberton.h"

/**
* main - a program that prints the number of arguments passed into it
* @argc: argument count
* @argv: argument vector (array)
*
* Return: Always 0 (Success)
*/

int main(int argc, __attribute__((__unused__)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
