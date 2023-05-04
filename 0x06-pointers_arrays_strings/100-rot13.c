#include "main.h"

/**
 * rot13 - encodes a string
 * @str: pointer to string
 * Return: pointer to str
 */
char *rot13(char *str)
{
	int i;
	int x;
	char charecter_input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char charecter_output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x < 52; x++)
		{
			if (str[i] == charecter_input[x])
			{
				str[i] = charecter_output[x];
				break;
			}
		}
	}
	return (str);
}
