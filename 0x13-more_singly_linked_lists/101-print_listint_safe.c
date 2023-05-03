#include "lists.h"


/**
 * _filter_list - entry point
 * @list: the list with unique nodes
 * @size: size of the list plus one (the new one)
 * @new: next node
 * Return: pointer to the new list
 */
const listint_t **_filter_list(const listint_t **list,
		size_t size, const listint_t *new)
{
	size_t i;
	const listint_t **newlist;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
	{
		/* check if there is any previous node */
		/* that equals the actual node */
		newlist[i] = list[i];
	}
	newlist[i] = new;
	free(list);
	return (newlist);
}
/**
 * print_listint_safe - entry point
 * @head: list head
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, j;
	const listint_t **l = NULL;

	if (head == NULL)
	{
		exit(98);
	}
	while (head)
	{
		for (j = 0; j < i; j++)
		{
			if (head == l[j])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(l);
				return (i);
			}
		}
		i++;
		l = _filter_list(l, i, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;

	}
	free(l);
	return (i);
}
