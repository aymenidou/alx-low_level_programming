#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node
 * @head: head of list
 * @index: index of node to be deleted
 * Return: 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int node = 0;
	dlistint_t *tmp;

	if (!head || !(*head))
		return (-1);
	tmp = *head;
	if (*head)
	{
		while (tmp)
		{
			if (node == index)
			{
				if (index)
					(tmp->prev)->next = tmp->next;
				else
					*head = tmp->next;
				if (tmp->next)
					(tmp->next)->prev = tmp->prev;
				free(tmp);
				return (1);
			}
			node++;
			tmp = tmp->next;
		}
	}

	return (-1);
}
