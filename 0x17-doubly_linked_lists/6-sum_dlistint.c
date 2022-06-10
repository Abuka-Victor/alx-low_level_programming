#include "lists.h"

/**
 * sum_dlistint - finds the sum of a doubly linked list
 * @h: The head of the list
 *
 * Return: Sum of the structure
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	while (h)
	{
		count += h->n;
		h = h->next;
	}

	return (count);
}
