#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the
 * beginning of a dlistint_t list.
 * @head: The head of the list
 * @n: The element number of the list
 *
 * Return: The address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	if (!(*head))
	{
		node->next = NULL;
		node->prev = NULL;
		(*head) = node;
	}
	else
	{
		node->next = (*head);
		(*head)->prev = node;
		(*head) = node;
	}
	return (node);
}
