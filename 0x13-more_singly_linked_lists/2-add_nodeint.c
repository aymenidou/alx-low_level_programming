#include "lists.h"

/**
 * *add_nodeint - entry point
 * @head: list head
 * @n: integer input
 * Return: list new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}

