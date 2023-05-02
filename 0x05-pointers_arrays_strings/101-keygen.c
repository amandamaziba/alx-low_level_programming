#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- generates random valid passwords
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int a;
	int total = 0;
	int password[100];

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		total += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - total) - '0' < 78)
		{
			a = 2772 - total - '0';
			total += a;
			putchar(a + '0');
			break;
		}
	}
	return (0);
}
