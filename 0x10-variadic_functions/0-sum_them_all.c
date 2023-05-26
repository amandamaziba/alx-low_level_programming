#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters
 * @...: A variable number of paramters to be calculated
 * Return: 0 or Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list prmt;

	va_start(prmt, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(prmt, int);
	va_end(prmt);
	return (sum);
}
