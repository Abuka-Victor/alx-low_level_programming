#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to be duplicated
 *
 * Return: Pointer to the string
 */
char *_strdup(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		continue;

	char *s = malloc(sizeof(char) * i);

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';

	return (s);
}
