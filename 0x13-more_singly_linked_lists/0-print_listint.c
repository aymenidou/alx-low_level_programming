#include "lists.h"

/**
 * print_listint - entry point
 * @h: list head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n",h->n);
		h = h->next;
	}
	return (i);
}
