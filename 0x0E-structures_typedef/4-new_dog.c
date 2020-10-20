#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* _strdup - Function returns a pointer to a newly allocated space in memory.
* @str: string to copy.
*
* Return: pointer to the array. NULL is size is 0 or fails.
*/
char *_strdup(char *str)
{
	unsigned int j = 0;
	unsigned int i;
	char *ptr;

	if (str == '\0')
	{
		return ('\0');
	}
	while (str[j] != '\0')
	{
		j++;
	}
	ptr = malloc(sizeof(char) * (j + 1));
	if (ptr != NULL)
	{
		for (i = 0; i <= j; i++)
		{
			ptr[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}

/**
* new_dog - Function that creates a new dog.
* @name: String of the dog's name
* @age: integer for the age of the dog
* @owner: string of the owner's name
*
* Return: a pointer to a struct.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->name = _strdup(name);
	if (new->name == NULL)
	{
		free(new->name);
		return (NULL);
	}
	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}
	new->age = age;
	return (new);
}
