#include "holberton.h"

/**
* main - a program that adds positive numbers
* @argc: argument count
* @argv: argument vector (array)
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int count, check, sum;

	sum = 0;

	for (count = 1; count < argc; count++)
	{
		for (check = 0; argv[count][check]; check++)
		{
			if (argv[count][check] < 48  || argv[count][check] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[count]);
	}
	printf("%d\n", sum);

	return (0);
}
