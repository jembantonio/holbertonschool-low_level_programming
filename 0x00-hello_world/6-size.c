#include <stdio.h>
#include <string.h>

/**
* main - Entry Point
* Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of an long int: %lu byte(s)\n", sizeof(long));
	printf("Size of an long long int: %lu byte(s)\n", sizeof(double));
	printf("Size of an float: %lu byte(s)\n", sizeof(float));

	return (0);
}
