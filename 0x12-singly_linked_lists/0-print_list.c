#include "lists.h"

/**
 * print_list - print all elements of a list_t
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (h)
	{
		*tmp = *h;
	if (tmp)
	{
		while (tmp)
		{
			if (tmp->str)
				printf("[%i] %s\n", tmp->len, tmp->str);
			else
				printf("[0] (nil)\n");
			tmp = tmp->next;
			i++;
		}
	}
	}
	return (i);
}
