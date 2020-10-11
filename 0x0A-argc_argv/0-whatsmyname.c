#include "holberton.h"

/**
* main - Program that prints its name, followed by a new line.
* @argc: Number of command lines arguments.
* @argv: Character of arrays.
*
* Return: Succes is 0.
*/
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;

	while (*(argv[0] + i) != '\0')
	{
		_putchar(*(argv[0] + i));
		i++;
	}
	_putchar('\n');
	return (0);
}
