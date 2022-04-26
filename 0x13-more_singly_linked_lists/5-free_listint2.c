#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: The head of the list
 *
 * Return: Null void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *forward;

	if (*head == NULL)
		return;

	node = *head;
	forward = node->next;

	while (node != NULL)
	{
		free(node);
		node = forward;
		if (forward->next != NULL)
		{
			forward = forward->next;
		}
		else
		{
			free(forward);
			node = NULL;
		}
	}
	*head = NULL;
	head = NULL;
}
