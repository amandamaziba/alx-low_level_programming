#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Prints the result of simple operations.
 * @num_a: The number of arguments supplied to the program.
 * @a: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int num_a, char *a[])
{
	char *oprt;
	int num1, num2;

	if (num_a != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(a[1]);
	oprt = a[2];
	num2 = atoi(a[3]);

	if (get_op_func(oprt) == NULL || oprt[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(oprt)(num1, num2));
	return (0);
}
