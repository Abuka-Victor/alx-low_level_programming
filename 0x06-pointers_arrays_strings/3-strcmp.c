#include "main.h"

/**
 * _strcmp - This compares two strings
 * @s1: This is the first string
 * @s2: This is the second string
 *
 * Return: An int, 0 if equal, +ve is 1 > 2
 * -ve if 1 < 2
 */
int _strcmp(char *s1, char *s2)
{
	int count1 = 0, count2 = 0;
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		count1 += s1[i];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		count2 += s2[i];
	}

	if (count1 > count2)
	{
		return (1);
	}
	else if (count1 < count2)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
