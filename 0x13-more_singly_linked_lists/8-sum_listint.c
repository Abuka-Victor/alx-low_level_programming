#include "lists.h"

/**
 * sum_listint - Returns the sum of numbers in a list
 * @head: Head of the list
 *
 * Return: Sum of all numbers in the nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
