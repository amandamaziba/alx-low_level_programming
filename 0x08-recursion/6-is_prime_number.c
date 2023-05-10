#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - checks if a number is primeor or not
 * @n: number to be calculated
 * Return: value
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if number is prime recursively
 * @n: number to be checked
 * @i: iterate number
 * Return: results
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
