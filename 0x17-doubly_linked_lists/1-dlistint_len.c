#include "lists.h"

/**
 * dlistint_len - Prints the elements in a doubly linked list
 * @h: The head of the list
 *
 * Return: Size of the structure
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
