#include "lists.h"

/**
 * print_listint - Prints a linked list
 * @h: The head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t numElem = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numElem++;
	}

	return (numElem);
}
