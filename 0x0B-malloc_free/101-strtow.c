#include "main.h"
#include <stdlib.h>

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
	if (arr == NULL)
		return (NULL);


	for (i = wc = 0; i < size; i++)
	{
		for (j = wc; str[j] != '\0'; j++)
		{
			if (str[j] == ' ')
				wc++;
			if (str[j] != ' ' && (str[j + 1] == ' ' || str[j + 1] == '\0'))
			{
				arr[i] = malloc(sizeof(char) * (j - wc));
				if (arr[i] == NULL)
				{
					int v;

					for (v = 0; v <= i; v++)
						free(arr[v]);
					free(arr);
					return (NULL);
				}
				break;
			}
		}
		for (k = 0; wc <= j; wc++, k++)
		{
			arr[i][k] = str[wc];
		}
		arr[i][k] = '\0';
	}

	return (arr);
}
