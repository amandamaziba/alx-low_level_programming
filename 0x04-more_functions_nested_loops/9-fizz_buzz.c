#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 *and instead of number print Fizz for multiples of 3 and Buzz multiples of 5
 * FizzBuzz for both
 *Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
