#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: Pointer to a string.
 * @accept: Pointer to string to compare.
 *
 * Return: Pointer where it finds the first match.
 */
char *_strpbrk(char *s, char *accept)
{
	for (; ; s++)
	{
		if (*accept == *s)
		{
			break;
		}
		else if (*s == '\0')
		{
			return ('\0');
		}
		accept++;
	}
	return (s - 1);
}
