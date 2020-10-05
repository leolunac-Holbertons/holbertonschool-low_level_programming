#include "holberton.h"

/**
 * *_strchr - Function that locates a character in a string.
 * @s: Pointer to a string.
 * @c: Character to locate in the string.
 *
 * Return: Pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == '\0')
		{
			return ('\0');
		}
	}
}
