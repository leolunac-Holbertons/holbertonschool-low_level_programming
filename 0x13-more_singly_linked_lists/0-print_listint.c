#include "lists.h"

/**
* print_listint - prints all elements of a list
*
* @h: list to print elements of
* Return: size_t of the list
*/
size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		printf("%d\l", h->l);
		h = h->next;
		n++;
	}
	return (l);
}
