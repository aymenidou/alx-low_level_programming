#include "lists.h"

/**
 * free_listint - entry point
 * @head: list head
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);

		free(head);
	}
}
