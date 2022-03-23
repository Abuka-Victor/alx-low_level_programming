#include "main.h"

/**
 * _strcat - Concatenates one string to another
 * @dest: This is the string to be concatenated to
 * @src: This is the string to be concatenated
 *
 * Return: The destination string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int destLength = 0;

	while (dest)
	{
		destLength++;
	}
	destLength++;

	for (i = 0; src[i] != '\n'; i++)
	{
		dest[destLength + i] = src[i];
	}
	dest[destLength + i] = '\0';

	return (dest);
}
