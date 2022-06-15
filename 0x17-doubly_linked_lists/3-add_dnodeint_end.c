#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at
 * the end of a dlistint_t list.
 *
 * @head: The head of the dlinkedlist
 * @n: The int inside of the element
 *
 * Return: The pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *keep;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (!(*head))
	{
		node->prev = NULL;
		(*head) = node;
	}
	else
	{
		keep = (*head);
		while (keep->next)
			keep = keep->next;
		keep->next = node;
		node->prev = keep;
	}
	return (node);
}
