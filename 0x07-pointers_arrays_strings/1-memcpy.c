#include "holberton.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: Pointer to memory location.
 * @src: Pointer to Characters to copy.
 * @n: Size of characters to copy
 *
 * Return: A serie of character that fill memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
