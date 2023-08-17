#include "lists.h"

/**
 * add_dnodeint - add node to head
 * @head: list head
 * @n: integer input
 * Return: pointer to new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node){
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
