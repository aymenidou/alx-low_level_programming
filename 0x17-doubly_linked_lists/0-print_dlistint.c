#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 * @h: list head
 * Return: list size
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (h)
	{
		*tmp = *h;
		if (tmp)
		{
			while (tmp)
			{
				if (tmp->n)
					printf("%i\n", tmp->n);
				tmp = tmp->next;
				i++;
			}
		}
	}
	return (i);
}
