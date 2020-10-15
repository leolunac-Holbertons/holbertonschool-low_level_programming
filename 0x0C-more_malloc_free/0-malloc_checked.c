#include "holberton.h"
#include <stdlib.h>

/**
* malloc_checked - Function that allocates memory using malloc.
* @b: size to allocate memory.
*
* Return: a pointer with the memory location.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
