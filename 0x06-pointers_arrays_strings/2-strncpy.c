#include "main.h"

/**
 * _strncpy - Concatenates one string to another
 * @dest: This is the string to be copied to
 * @src: This is the string to be copied
 * @n: number of bytes to be copied
 *
 * Return: The destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int counter = 0;
	int srcLen = 0;

	while (src[counter] != '\0')
	{
		srcLen++;
		counter++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	if (n > srcLen)
		dest[i] = '\0';

	return (dest);
}
