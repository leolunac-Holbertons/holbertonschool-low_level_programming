#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints message
 *
 * Return: Always 1
 */
int main(void)
{
	int size;

	size = sizeof(
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      size);
	return (1);
}
