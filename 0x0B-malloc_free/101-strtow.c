#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - Splits a string into individual words
 * @str: This is the string to be split
 *
 * Return: The function returns a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **arr;
	int i, j, k, wc, size;

	if (str == NULL || *str == '\0')
	       return (NULL);

	printf("Checkpoint 0\n");

	for (i = size = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			size++;

	arr = malloc(sizeof(char *) * size);
	if (arr == NULL)
		return (NULL);

	printf("Checkpoint 1\n");
	for (i = wc = 0; i < size; i++)
	{
		for (j = wc; str[j] != '\0'; j++)
		{
			if (str[j] == ' ')
				wc++;
			if (str[j] != ' ' && (str[j + 1] == ' ' || str[j + 1] == '\0'))
			{
				printf("Checkpoint 2\n");
				arr[i] = malloc(sizeof(char) * (j - wc));
				if (arr[i] == NULL)
					return (NULL);
				break;
			}
		}
		for (k = 0; wc <= j; wc++, k++)
		{
			printf("Checkpoint 3\n");
			arr[i][k] = str[wc];
		}
		arr[i][k] = '\0';
	}
	return (arr);
}
