#include "main.h"

/**
 * leet - capitalizes all words of a string
 * @str: pointer to string
 * Return: pointer to str
 */
char *leet(char *str)
{
	int i;
	int count;
	char charecter[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		count = 0;
		while (count < 10)
		{
			if (charecter[count] == str[i])
			{
				str[i] = num[count];
			}
			count++;
		}
		i++;
	}
	return (str);
}
