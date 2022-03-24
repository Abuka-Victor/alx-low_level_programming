#include "main.h"

/**
 * cap_string - This Capitalizes any begining of a word
 * @n: This is the string
 *
 * Return: Gives back the capitalized string
 */
char *cap_string(char *n)
{
	char sep[] = {'\n', '\t', ' ', 40, 41, 44, 59, 46, 33, 63, 34, 123, 125};
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (n[i] == sep[j])
			{
				if (sep[j] == '\t')
					n[i] = 32;

				if (n[i + 1] >= 97 && n[i + 1] <= 122)
					n[i + 1] -= 32;
			}
		}
	}

	return (n);
}
