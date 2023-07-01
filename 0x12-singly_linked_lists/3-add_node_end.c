#include "lists.h"

/**
 * add_node_end - entry point
 * @head: list head
 * @str: input string
 * Return: pointer to new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end = malloc(sizeof(list_t)), *tmp;

	if (end && str)
	{
		end->str = strdup(str);
		end->len = strlen(str);
		end->next = NULL;
		if (*head == NULL)
		{
			*head = end;
			return (end);
		}
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = end;
	}
	return (end);
}

