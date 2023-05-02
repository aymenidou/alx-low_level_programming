#include "lists.h"

/**
 * sum_listint - entry point
 * @head: list head
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
