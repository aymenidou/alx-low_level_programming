#include "lists.h"

/**
 * get_dnodeint_at_index - get node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;
	dlistint_t *tmp = head;

	if (head)
	{
		while (tmp)
		{
			if (node == index)
			{
				return (tmp);
			}
			node++;
			tmp = tmp->next;
		}
	}

	return (0);
}
