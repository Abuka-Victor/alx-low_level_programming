#include "lists.h"

/**
 * pop_listint - Removes the head of the list and returns the number
 * @head: The head of the list
 *
 * Return: The number contained by the popped element
 */
int pop_listint(listint_t **head)
{
	int n = 0;

	if (*head != NULL)
	{
		listint_t *cursor = *head;
		listint_t *node = *head;

		n = node->n;
		*head = cursor->next;
		free(node);
	}
	return (n);
}
