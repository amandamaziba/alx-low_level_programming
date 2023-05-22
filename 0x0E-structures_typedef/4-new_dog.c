#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src);
int string_length(char *str);

/**
 * string_length - calculate the length of a string
 * @str: string to be checked
 * Return: the length of the string
 */

int string_length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copy a string
 * @dest: sting to be copied to
 * @src: string copied from
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';
	return (dest);
}


/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 * Return: pointer to new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int n_length = 0, o_lenght = 0;

	if (name != NULL && owner != NULL)
	{
		n_length = string_length(name);
		o_lenght = string_length(owner);
		new_dog = malloc(sizeof(dog_t));
		if (new_dog == NULL)
			return (NULL);
		new_dog->name = malloc(sizeof(char) * (n_length + 1));
		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		new_dog->owner = malloc(sizeof(char) * (o_lenght + 1));
		if (new_dog->owner == NULL)
		{
			free(new_dog);
			free(new_dog->name);
			return (NULL);
		}
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
