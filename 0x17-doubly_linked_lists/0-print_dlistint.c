#include "lists.h"

/**
 * print_dlistint - Prints the elements in a doubly linked list
 * @h: The head of the list
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
