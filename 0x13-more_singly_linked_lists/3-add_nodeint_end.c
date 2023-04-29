#include "lists.h"

/**
 * *add_nodeint_end - entry point
 * @head: list head
 * @n: input integer
 * Return: pointer to new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint)), *tmp = *head;

	new->n = n;
	new->next == NULL;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			tmp->next = new;
			break;
		}

	}
	return (new);

}
