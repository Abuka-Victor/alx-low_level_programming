#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns
 * the nth node of a dlistint_t linked list.
 *
 * @head: The head of the list
 * @index: The index of the element being sought
 *
 * Return: A node pointer if it exists else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i;
	dlistint_t *ptr;

	if (!head)
		return (NULL);

	for (i = 0, ptr = head; ptr; i++, ptr = ptr->next)
	{
		if (i == index)
			return (ptr);
	}

	return (NULL);
}
