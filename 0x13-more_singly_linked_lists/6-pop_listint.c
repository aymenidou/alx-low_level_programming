#include "lists.h"

/**
 * pop_listint - entry point
 * @head: list head
 * Return: if empty return 0
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	*head = tmp->next;
	i = tmp->n;
	free(tmp);
	return (i);

	
}
