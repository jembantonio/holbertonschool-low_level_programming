#include "3-calc.h"

/**
* get_op_func - looks through operator struct to find the correct function
* @s: pointer to the operator in the array
*
* Return: Function pointer to operation function or NULL if fails
*/

int (*get_op_func(char *s))(int, int)
{
 	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    	};
    
	int i;

	for (i = 0; i < 5; i++)
		if (*s == ops[i].op[0])
			return (ops[i].f);

	return (NULL);
}
