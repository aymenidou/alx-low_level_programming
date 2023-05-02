#include "lists.h"

/**
 * get_nodeint_at_index - entry point
 * @head: list head
 * @index: node index
 * Return: 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		if (head != NULL)
		{
			head = head->next;
		}
	}
	return head;
}
