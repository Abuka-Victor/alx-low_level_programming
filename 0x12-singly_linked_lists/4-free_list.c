#include "lists.h"

/**
 * free_list - Frees a list
 * @head: The head of the list
 *
 * Return: Null void
 */
void free_list(list_t *head)
{
	list_t *node;
	list_t *forward;

	node = head;
	forward = node->next;

	while (node != NULL)
	{
		free(node);
		node = forward;
		if (forward->next != NULL)
			forward = forward->next;
		else
		{
			free(forward);
			break;
		}
	}
}
