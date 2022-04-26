#include "lists.h"

/**
 * listint_len - Returns the number of nodes in a list
 * @h: The head of the list
 *
 * Return: The number of nodes or 0
 */
size_t listint_len(const listint_t *h)
{
	size_t numElem = 0;

	while (h != NULL)
	{
		numElem++;
		h = h->next;
	}

	return (numElem);
}

/**
 * get_nodeint_at_index - Returns the number at a particular node index
 * @head: Head of the list
 * @index: Index No of node
 *
 * Return: Pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t size = listint_len(head);
	listint_t *node = head;
	size_t current = 0;

	if (index > size || head == NULL)
		return (NULL);

	while (current < index)
	{
		node = node->next;
		current++;
	}
	return (node);
}
