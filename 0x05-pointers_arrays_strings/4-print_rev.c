#include "holberton.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Variable string.
 *
 * Return: Always void.
 */
void print_rev(char *s)
{
	char *p;

	p = s;

	while (*s != '\0')
	{
		s++;
	}
	for (s = (s - 1) ; s >= p ; --s)
	{
		_putchar(*s);
	}
	_putchar(10);
}
