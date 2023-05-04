#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to string
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while (!(str[i] >= 97 && str[0] <= 122))
			i++;
		if (str[i] == ',' || 
		str[i] == ';' || 
		str[i] == '.' || 
		str[i] == '!' || 
		str[i] == '?' || 
		str[i] == '"' || 
		str[i] == '(' || 
		str[i] == ')' || 
		str[i] == '{' || 
		str[i] == '}' || 
		i == 0)
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
