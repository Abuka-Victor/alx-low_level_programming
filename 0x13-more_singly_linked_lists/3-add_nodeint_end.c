#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the top of a list
 * @head: A pointer to the head of the list
 * @n: The number to be added to the new node
 *
 * Return: The address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *cursor;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	cursor = *head;

	while (cursor->next != NULL)
	{
		cursor = cursor->next;
	}
	cursor->next = node;
	return (node);
}
