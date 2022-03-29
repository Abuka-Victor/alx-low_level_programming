#include "main.h"

/**
 * _strspn - Counts the number of bytes of a string contained in another string
 * @s: String to be searched
 * @accept: String to be searched for
 *
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[i])
		{
			count++;
		}
	}
	return (count);

}
