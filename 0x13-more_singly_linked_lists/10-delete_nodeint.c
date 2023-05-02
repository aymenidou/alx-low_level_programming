#include "lists.h"
/**
 * delete_nodeint_at_index - entry point
 * @head: list head
 * @index: index of node to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *del;

	if (head == NULL)
		return (-1);
	tmp = *head;

	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (tmp == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
	}
	if (tmp != NULL)
	{
		del = tmp->next;
		tmp->next = del->next;
		free(del);
		return (1);
	}
	return (-1);
}
