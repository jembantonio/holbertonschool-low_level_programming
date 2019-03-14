#include "3-calc.h"

/**
* main - a calculator function based on command line arguments
* @argc: argument count
* @argv: argument vector (array)
*
* Return: Always 0 (Success), exit if fails
*/

int main(int argc, char *argv[])
{
	int num1, num2, answer;
	(void) argc;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	answer = get_op_func(argv[2])(num1, num2);

	printf("%d\n", answer);
	return (0);
}
