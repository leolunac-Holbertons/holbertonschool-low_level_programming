#include "holberton.h"

/**
 * leet - function that encodes a string into 1337.
 * @a: Pointer to array
 *
 * Return: Array with string encode into 1337.
 */
char *leet(char *a)
{
	int i, j;
	char encode[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char ch[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= 10 ; j++)
		{
			if (a[i] == ch[j])
				a[i] = encode[j];
		}
	}
	return (a);
}
