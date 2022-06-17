#include "lists.h"

/**
 * sum_dlistint - finds the sum of a doubly linked list
 * @head: The head of the list
 *
 * Return: Sum of the structure
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int count;

	ptr = head;
	count = 0;

	while (ptr)
	{
		count += ptr->n;
		ptr = ptr->next;
	}

	return (count);
}
