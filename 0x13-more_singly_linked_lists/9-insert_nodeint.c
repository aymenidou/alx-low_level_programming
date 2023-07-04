#include "lists.h"

/**
 * *insert_nodeint_at_index - entry point
 * @head: list head
 * @idx: index to be put in
 * @n: integer value
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = malloc(sizeof(listint_t)), *tmp;
	unsigned int i;

	tmp = *head;
	if (node == NULL || head == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
