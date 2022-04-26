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

	while(current < index)
	{
		node = node->next;
		current++;
	}
	return (node);
}

/**
 * insert_nodeint_at_index - Inserts a new node at index specified
 * @head: Pointer to head
 * @idx: The index position to replace
 * @n: The number for the node

 * Return: The address of the new node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *before;
	size_t size;

	if (head == NULL || *head == NULL)
		return (-1);

	node = get_nodeint_at_index(*head, index);
	before = *head;
	size = listint_len(*head);

	if (index > size)
		return (-1);

	if (before == node)
	{
		*head = node->next;
		free(node);
		return(1);
	}

	while(before->next != node)
	{
		before = before->next;
	}
	before->next = node->next;
	free(node);
	return (1);
}
