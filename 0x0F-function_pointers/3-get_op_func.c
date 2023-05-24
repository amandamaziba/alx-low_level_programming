#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: The operator passed as argument.
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	while (ops[i].op != NULL && *ops[i].op != *s)
		i++;
	return (ops[i].f);
}
