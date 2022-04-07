#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concats 2 strings up to a no of bytes
 * @s1: The first string
 * @s2: The second string
 * @n: The cap
 *
 * Return: A pointer to a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newString;
	unsigned int size1, size2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = sizeof(s1);
	size2 = sizeof(s2);

	if (n > size2)
		n = size2;

	newString = malloc(size1 + n);
	if (newString == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		newString[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		newString[i] = s2[j];
	newString[i] = '\0';

	return (newString);
}
