#include "lists.h"

/**
 * dlistint_len - count list length
 * @h: list head
 * Return: list length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (h)
	{
		*tmp = *h;

		while (tmp)
		{
			i++;
			tmp = tmp->next;
		}
	}
	return (i);
}
