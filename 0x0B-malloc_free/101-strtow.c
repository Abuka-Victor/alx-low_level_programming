#include "main.h"
#include <stdlib.h>

/**
 * countWords - Counts the number of words in a program
 * @str: The string to be counted
 * @sp: The starting point.
 *
 * Return: an int which is the number of words
 */
int countWords(char *str, int *sp)
{
	int noWords = 0;

	while (str[*sp] != '\0')
	{
		if (str[*sp] != ' ')
		{
			while (str[*sp] != '\0')
			{
				if (str[*sp] == ' ')
					return (noWords);
				noWords++;
				*sp++;
			}
			return (noWords);
		}
		*sp++;
	}
	return (0);
}

/**
 * strtow - Splits a string into individual words
 * @str: This is the string to be split
 *
 * Return: The function returns a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, size, sp, spb;
	char **arr;

	if (str == NULL || str == "")
	       return (NULL);

	if (str[0] != ' ')
		size = 1;
	else
		size = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i - 1] == ' ' && str[i] != ' ')
			size++;
	}

	arr = malloc(sizeof(char *) * size);
	sp = 0;
	spb = 0;

	for (i = 0; i < size; i++)
	{
		arr[i] = malloc(sizeof(char) * countWord(str, &sp));
	}

	return (arr);
}
