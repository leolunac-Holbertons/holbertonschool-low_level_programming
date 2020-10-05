#include "holberton.h"

/**
 * *_memset - function to fill memory with constant byte.
 * @s: Pointer to memory location.
 * @b: Characters to fill memory.
 * @n: Size of memory to fill.
 *
 * Return: A serie of character that fill memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
