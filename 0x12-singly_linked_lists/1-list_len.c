#include "lists.h"

/**
 * list_len - entry point
 * @h: linkedlist head
 * Return: list len
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			return (i);
		}
		i++;
		h = h->next;
	}
	return (i);
}
