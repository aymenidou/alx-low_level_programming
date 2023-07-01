#include "lists.h"

/**
 * list_len - list length
 * @h: list head
 * Return: number of elements is the list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (h)
		*tmp = *h;

	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);

}
