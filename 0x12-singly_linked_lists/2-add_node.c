#include "lists.h"

/**
 * add_node - entry point
 * @head: list head
 * @str: input string
 * Return: list head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h = malloc(sizeof(list_t));

	if (h)
	{
		h->str = strdup(str);
		h->len = strlen(str);
		h->next = *head;
		*head = h;
	}
	return (h);
}
