#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, new_str_len;
	char *new_str;

	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;

	new_str_len = (i + j) - 1;

	new_str = malloc(new_str_len);
	if (new_str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		new_str[k] = s1[k];

	}
	for (; k < new_str_len; k++)
		new_str[k] = s2[k];

	new_str[k] = '\0';

	return (new_str);
}
