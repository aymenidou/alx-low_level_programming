#include "lists.h"

/**
 * listint_len - entry point
 * @h: list head
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
