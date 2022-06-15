#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: The head of the list
 *
 * Return: Null void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *keep;

	if (!head)
		return;

	keep = head->next;
	free(head);
	while (keep)
	{
		head = keep;
		keep = keep->next;
		free(head);
	}
}
