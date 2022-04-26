#include "lists.h"

/**
 * add_nodeint - Adds a new node at the top of a list
 * @head: A pointer to the head of the list
 * @n: The number to be added to the new node
 *
 * Return: The address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
