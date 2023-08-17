#include "lists.h"

/**
 * sum_dlistint - sum list
 * @head: list head
 * Return: the sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	if (head)
	{
		while (tmp)
		{
			sum += tmp->n;
			tmp = tmp->next;
		}
	}

	return (sum);
}
