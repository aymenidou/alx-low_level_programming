#include "lists.h"

/**
 * *add_nodeint_end - entry point
 * @head: list head
 * @n: input integer
 * Return: pointer to new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *tmp;

	if (new)
	{
		new->n = n;
		new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			return (new);
		}
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);

}
