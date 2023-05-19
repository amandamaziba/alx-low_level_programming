#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_length - checks the string length
 * @s: string to be checked
 * Return: string length
 */
int str_length(char *s)
{
	int count = 0;

	while (*s++)
		count++;
	return (count);
}
/**
 * _isdigit - checks charecters of a string if are non digit
 * @s: string to be checked
 * Return: 1 or 0
 */
int _isdigit(char *s)
{
	int c = 0;

	while (s[c])
	{
		if (s[c] < 48 || s[c] > 57)
			return (0);
		c++;
	}
	return (1);
}
/**
 * check_error - checks error for main
 * Return: always 0
 */
void check_error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @numA: number of arguments
 * @a: array of arguments
 * Return: Always 0
 */
int main(int numA, char *a[])
{
	int i, length1, length2, totalLen, num1, num2, temp, *mul, x = 0;
	char *str, *str1;

	str = a[1], str1 = a[2];
	if (numA != 3 || !_isdigit(str) || !_isdigit(str1))
		check_error();
	length1 = str_length(str);
	length2 = str_length(str1);
	totalLen = length1 + length2 + 1;
	mul = malloc(sizeof(int) * totalLen);
	if (!mul)
		return (1);
	for (i = 0; i <= totalLen - 1; i++)
		mul[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		num1 = str[length1] - '0';
		temp = 0;
		for (length2 = str_length(str1) - 1; length2 >= 0; length2--)
		{
			num2 = str1[length2] - '0';
			temp = temp + mul[length1 + length2 + 1] + (num1 * num2);
			mul[length1 + length2 + 1] = temp % 10;
			temp /= 10;
		}
		if (temp > 0)
			mul[length1 + length2 + 1] += temp;
	}
		for (i = 0; i <= totalLen - 1; i++)
		{
			if (mul[i])
				x = 1;
			if (x)
				_putchar(mul[i] + '0');
		}
		if (!x)
			_putchar('0');
		_putchar('\n');
		free(mul);
		return (0);
}
