#include "holberton.h"

/**
 * string_toupper - function reverses the content of an array of integers.
 * @a: Pointer to array
 *
 * Return: Array of UPPER characters.
 */
char *string_toupper(char *a)
{
	int i, j;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	for (j = 0 ; j < i ; j++)
	{
		if (a[j] > 96 && a[j] < 123)
		{
			a[j] = a[j] - 32;
		}
		else
		{
			a[j] = a[j];
		}
	}
	return (a);
}

