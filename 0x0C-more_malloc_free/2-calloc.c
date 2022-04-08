#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: The no of member
 * @size: The size of each member
 *
 * Return: Void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	void *ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
