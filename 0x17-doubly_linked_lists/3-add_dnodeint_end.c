#include "lists.h"

/**
 * add_dnodeint_end - add at the end
 * @head: list head
 * @n: integer input
 * Return: pointer to new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *tmp;

	if (!head)
	{
		end = malloc(sizeof(dlistint_t));
	}

	if (end)
	{
		end->n = n;
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
		end->prev = tmp;
	}
	return (end);
}
