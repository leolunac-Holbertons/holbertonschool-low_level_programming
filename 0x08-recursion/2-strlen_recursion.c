#include "holberton.h"

/**
 *_strlen_recursion - function that return lenght of a string.
 * @s: String literal to count.
 *
 * Return: a integer of a lenght.
 */
int _strlen_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 +  _strlen_recursion(s + 1));
	}
}
