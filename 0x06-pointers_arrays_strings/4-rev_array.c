#include "main.h"

/**
 * reverse_array - compares two strings
 * @a: pointer to array
 * @n: number of elements of the array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	n = n - 1;

	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
