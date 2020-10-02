#include "holberton.h"

/**
 * rot13 - function that encode a string to rot13
 * @a: Pointer to array.
 *
 * Return: Array encode in rot13
 */
char *rot13(char *a)
{
	int i, j;
	char alpha[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char ch[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= 52 ; j++)
		{
			if (a[i] == alpha[j])
			{
				a[i] = ch[j];
				break;
			}
		}
	}
	return (a);
}
