#include "holberton.h"

/**
 * _pow_recursion - function that return lenght of a string.
 * @x: integer base.
 * @y: integer power to.
 *
 * Return: result of num1 power to num2.
 */
int _pow_recursion(int x, int y)
{
	/* base case */
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}

