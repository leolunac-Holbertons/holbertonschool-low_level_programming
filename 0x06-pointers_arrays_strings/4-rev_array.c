#include "holberton.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: array
 * @n: elements of the array.
 *
 * Return: Array of reverse characteres.
 */

void reverse_array(int *a, int n)
{
	int i, tmp;
	int *b;

	b = &a[n - 1];
	for (i = 0 ; i < (n / 2) ; i++)
	{
		tmp = a[i];
		a[i] = *b;
		*b = tmp;
		b--;
	}
}
